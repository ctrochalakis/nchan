
#define NGX_HTTP_PUSH_DEFAULT_SHM_SIZE 33554432 //32 megs
#define NGX_HTTP_PUSH_DEFAULT_BUFFER_TIMEOUT 3600
#define NGX_HTTP_PUSH_DEFAULT_SUBSCRIBER_TIMEOUT 0  //default: never timeout
//(liucougar: this is a bit confusing, but it is what's the default behavior before this option is introducecd)
#define NGX_HTTP_PUSH_DEFAULT_CHANNEL_TIMEOUT 0 //default: timeout immediately

#define NGX_HTTP_PUSH_DEFAULT_MIN_MESSAGES 1
#define NGX_HTTP_PUSH_DEFAULT_MAX_MESSAGES 10

#define NGX_HTTP_PUSH_SUBSCRIBER_CONCURRENCY_LASTIN 0
#define NGX_HTTP_PUSH_SUBSCRIBER_CONCURRENCY_FIRSTIN 1
#define NGX_HTTP_PUSH_SUBSCRIBER_CONCURRENCY_BROADCAST 2

#define NGX_HTTP_PUSH_MECHANISM_LONGPOLL 0
#define NGX_HTTP_PUSH_MECHANISM_INTERVALPOLL 1

#define NGX_HTTP_PUSH_MIN_MESSAGE_RECIPIENTS 0

#define NGX_HTTP_PUSH_MAX_CHANNEL_ID_LENGTH 1024 //bytes

#ifndef NGX_HTTP_CONFLICT
#define NGX_HTTP_CONFLICT 409
#endif

#ifndef NGX_HTTP_GONE
#define NGX_HTTP_GONE 410
#endif

#ifndef NGX_HTTP_CREATED
#define NGX_HTTP_CREATED 201
#endif

#ifndef NGX_HTTP_ACCEPTED
#define NGX_HTTP_ACCEPTED 202
#endif


#define NGX_HTTP_PUSH_MESSAGE_RECEIVED 9000
#define NGX_HTTP_PUSH_MESSAGE_QUEUED   9001

#define NGX_HTTP_PUSH_MESSAGE_FOUND     1000 
#define NGX_HTTP_PUSH_MESSAGE_EXPECTED  1001
#define NGX_HTTP_PUSH_MESSAGE_EXPIRED   1002