// ...

int cert = SSL_get_peer_certificate(ssl); // BAD (SSL_get_verify_result is never called)

// ...