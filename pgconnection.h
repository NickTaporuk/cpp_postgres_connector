#ifndef UNTITLED_PGCONNECTION_H
#define UNTITLED_PGCONNECTION_H


#include <memory>
#include <mutex>
#include <libpq-fe.h>

class PGConnection
{
public:
    PGConnection();
    std::shared_ptr<PGconn> connection() const;

private:
    void establish_connection();

    std::string m_dbhost = "localhost";
    int         m_dbport = 5432;
    std::string m_dbname = "demo";
    std::string m_dbuser = "postgres";
    std::string m_dbpass = "postgres";

    std::shared_ptr<PGconn>  m_connection;

};


#endif //UNTITLED_PGCONNECTION_H
