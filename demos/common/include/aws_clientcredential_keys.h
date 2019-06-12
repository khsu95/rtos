/*
 * Amazon FreeRTOS V1.4.1
 * Copyright (C) 2017 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

#ifndef AWS_CLIENT_CREDENTIAL_KEYS_H
#define AWS_CLIENT_CREDENTIAL_KEYS_H

#include <stdint.h>

/*
 * PEM-encoded client certificate
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyCLIENT_CERTIFICATE_PEM \
"-----BEGIN CERTIFICATE-----\n"\
"MIIDWjCCAkKgAwIBAgIVAMRVjGWrc4rFreIa4SefUR48IMfPMA0GCSqGSIb3DQEB\n"\
"CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n"\
"IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0xOTA2MTIwODA4\n"\
"NTVaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n"\
"dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDQ+3PqB5BYHxnTIR8y\n"\
"vrduoGypBU9WY+Xq1QOjjEIKZSj1IlLPE1RCFt8VqGt5MFuAzUXySNPmWAl6j0vX\n"\
"dY6ZxBCs7ZQlniMryMA7J5b6SZ4shsSjyHCz3ZkW0r553f6SUP4nFCuoYsj3YnLN\n"\
"jolAR/9rFJ/z5hXUOYuUcqH1F2O1CvQLcnfdMA29tk1v3F/nFwMiLemGVq3G4CsC\n"\
"/2ZdRBUWiWrlLfy/tgwF6djEUVQF+xHQ9n/uvIViCTmavmlnw/K/8sWc9JeF+/to\n"\
"QQaWyOSK6o4Po5vDI43H4fb2Yvn5Hripeofb84H8ckbQF1sFipn0DRQ+9WIxACeq\n"\
"3IwvAgMBAAGjYDBeMB8GA1UdIwQYMBaAFBUlgiq0zOphXd8i+UXsoY5nCT+RMB0G\n"\
"A1UdDgQWBBTrsHy4HFG/g+Ka4/v/+BSaW3LQsTAMBgNVHRMBAf8EAjAAMA4GA1Ud\n"\
"DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAAFuJS5hbPTNhAf5gGfT/cAt1\n"\
"4+znHPKX2eLjZYZcug6N+hhvCD9fcysOtdoQpKIgiXVijJI04N1mTLNGENQUbTTk\n"\
"W+x851mMrGAKp4XBwB1LLtLiZhLmY7P4t1xsO7Twtn/VeWT15clyH63G2TGmwGPW\n"\
"Nnk8za+RX9EWyWcoWEpm/QzlahzZuz0TcjxSXTMhkq2DWMt1rw0yEyclvD8Aya3A\n"\
"fVie8918vcndVkgZ3JpEXDmY/90mB/oUwLk7AMSgr+Z3na2zqGUmSgw32WwIaTlB\n"\
"YE+Mli4TKQRN5LL4wng4KQ5SBufbDZtCSKhFNPJlVIjycMl66I+MDmDqhJML3Q==\n"\
"-----END CERTIFICATE-----\n"

/*
 * PEM-encoded issuer certificate for AWS IoT Just In Time Registration (JITR).
 * This is required if you're using JITR, since the issuer (Certificate 
 * Authority) of the client certificate is used by the server for routing the 
 * device's initial request. (The device client certificate must always be 
 * sent as well.) For more information about JITR, see:
 *  https://docs.aws.amazon.com/iot/latest/developerguide/jit-provisioning.html, 
 *  https://aws.amazon.com/blogs/iot/just-in-time-registration-of-device-certificates-on-aws-iot/.
 *
 * If you're not using JITR, set below to NULL.
 * 
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM  NULL

/*
 * PEM-encoded client private key.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----\n"\
 * "...base64 data...\n"\
 * "-----END RSA PRIVATE KEY-----\n"
 */
#define keyCLIENT_PRIVATE_KEY_PEM \
"-----BEGIN RSA PRIVATE KEY-----\n"\
"MIIEpAIBAAKCAQEA0Ptz6geQWB8Z0yEfMr63bqBsqQVPVmPl6tUDo4xCCmUo9SJS\n"\
"zxNUQhbfFahreTBbgM1F8kjT5lgJeo9L13WOmcQQrO2UJZ4jK8jAOyeW+kmeLIbE\n"\
"o8hws92ZFtK+ed3+klD+JxQrqGLI92JyzY6JQEf/axSf8+YV1DmLlHKh9RdjtQr0\n"\
"C3J33TANvbZNb9xf5xcDIi3phlatxuArAv9mXUQVFolq5S38v7YMBenYxFFUBfsR\n"\
"0PZ/7ryFYgk5mr5pZ8Pyv/LFnPSXhfv7aEEGlsjkiuqOD6ObwyONx+H29mL5+R64\n"\
"qXqH2/OB/HJG0BdbBYqZ9A0UPvViMQAnqtyMLwIDAQABAoIBAQC9zuTk9qG/p9/I\n"\
"xxiS+m2YaNTIXy5EBM/ajkaT0NxanK6qltYnhiLNNADCpwmWNLmnLsoM2OC9IdDa\n"\
"JDR6KSevuUh8B/y6ffrr1ZXjJH4YLa0gO/d12qOiee6FsDuYbGy/cBimXceZVL+7\n"\
"EQu8b21xmPL/yufMmnnRG8MOvV8kPsmsBJ8kMgMHmbdPtRRhLiQleSEJK2561B7I\n"\
"KAB+z2LLS72d4Jzp7aCbUEMq0Q4FLvzS6g/hS+CoyGZloO0JeLsksrfsTj/vQ/PO\n"\
"gTbAZRkPQWDHcj1c9eLy314ZdDIQtIvNR8jPgACCEHOWRJ7fDUpRIyWUfOfUQh/i\n"\
"BvM/ac3hAoGBAPDNP8n2Qh5GJ1fssWO9YNy4KokRUOkL1dJLl/Vpc8uDxc0mOAht\n"\
"rSKs0NukRpaWxbOLIkpsOrUOFpRLe/AKIP0wDDJjC2mcooopciO6HWfWEqDavM4z\n"\
"tvFKl2a1Vw3qXZchT1T3LNztHFLWocpEVL9X0yVLbm+tHCPjWweeI5fNAoGBAN4s\n"\
"FIoXCrZ64u/RwdrKID55wH6qmxS3h2eiaEGLO5p1pwxtFS3HpFBXZPsBBh8S6R4J\n"\
"lgkuWv/KpA2M8mVfQGKuU1EY34fqE8xJ4scA4wzrklx92LX4gItmFBray2gxB+4T\n"\
"0QPGW9fTBNn2l0OSDkvLP4VY6CaI02TJPMha5//rAoGAL89QnvS54/Dh1t8zyS3M\n"\
"kYYvS8+YVOz4oyxHG364cuvS1gyEi4fbHEtbnIBdU4DT9/Xj9QrQDSqi6QajsOER\n"\
"87MaeNaZaXqj+vKHqvhE5lzmjfFgE0DJTdcVgFr40dZ6hosiiSgaTDL3sKrUrKgs\n"\
"e2EglwMHBj1EnQuDA1wujPECgYEA26Ex8M0Ufw5+V1vByts0Au7zV4SqaFGCHvYT\n"\
"IHBWzLvwFr2jSS1qBy5OGkCJ36AfKd2KH6tetC2L/gVO/t2p1aPFo472MvM4/SQx\n"\
"dk8vJW+fsaWK3WE7GhMgXufaWzbVQwr9/kBSPMpTqnE2WcsCLPVQ5y7b2HQ8ng69\n"\
"8sbDQF8CgYArCovb9U3rzoJEIKQ40nXwZRiN7Xji39yq8O8Uvvw33stWfTsxnBRV\n"\
"fSzXBox9SopJ/oaQek1wtrRWBPMQnBee4MDoE0RGZCf1HtHeVJxQ6/ger3wOyeDg\n"\
"8DZ905/O3GBs1o5Q5A7aRcjRksac46HG0WALypYmvJbxd1oO9YzPUA==\n"\
"-----END RSA PRIVATE KEY-----\n"

/* The constants above are set to const char * pointers defined in aws_demo_runner.c,
 * and externed here for use in C files.  NOTE!  THIS IS DONE FOR CONVENIENCE
 * DURING AN EVALUATION PHASE AND IS NOT GOOD PRACTICE FOR PRODUCTION SYSTEMS 
 * WHICH MUST STORE KEYS SECURELY. */
extern const char clientcredentialCLIENT_CERTIFICATE_PEM[];
extern const char* clientcredentialJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM;
extern const char clientcredentialCLIENT_PRIVATE_KEY_PEM[];
extern const uint32_t clientcredentialCLIENT_CERTIFICATE_LENGTH;
extern const uint32_t clientcredentialCLIENT_PRIVATE_KEY_LENGTH;

#endif /* AWS_CLIENT_CREDENTIAL_KEYS_H */
