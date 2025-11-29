@class GCDWebServerResponse, NSString, NSData, GCDWebServer, GCDWebServerRequest, GCDWebServerHandler;

@interface GCDWebServerConnection : NSObject {
    int _socket;
    BOOL _virtualHEAD;
    struct __CFHTTPMessage { } *_requestMessage;
    GCDWebServerRequest *_request;
    GCDWebServerHandler *_handler;
    struct __CFHTTPMessage { } *_responseMessage;
    GCDWebServerResponse *_response;
    long long _statusCode;
    BOOL _opened;
}

@property (readonly, nonatomic) GCDWebServer *server;
@property (readonly, nonatomic, getter=isUsingIPv6) BOOL usingIPv6;
@property (readonly, nonatomic) NSData *localAddressData;
@property (readonly, nonatomic) NSString *localAddressString;
@property (readonly, nonatomic) NSData *remoteAddressData;
@property (readonly, nonatomic) NSString *remoteAddressString;
@property (readonly, nonatomic) unsigned long long totalBytesRead;
@property (readonly, nonatomic) unsigned long long totalBytesWritten;

+ (void)initialize;

- (BOOL)open;
- (void)didReadBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)didWriteBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)rewriteRequestURL:(id)a0 withMethod:(id)a1 headers:(id)a2;
- (id)preflightRequest:(id)a0;
- (void)processRequest:(id)a0 completion:(id /* block */)a1;
- (id)overrideResponse:(id)a0 forRequest:(id)a1;
- (void)abortRequest:(id)a0 withStatusCode:(long long)a1;
- (void)close;
- (void)_writeData:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)_writeHeadersWithCompletionBlock:(id /* block */)a0;
- (void)_writeBodyWithCompletionBlock:(id /* block */)a0;
- (void)_readData:(id)a0 withLength:(unsigned long long)a1 completionBlock:(id /* block */)a2;
- (void)_readHeaders:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)_readBodyWithRemainingLength:(unsigned long long)a0 completionBlock:(id /* block */)a1;
- (void)_readNextBodyChunk:(id)a0 completionBlock:(id /* block */)a1;
- (void)_initializeResponseHeadersWithStatusCode:(long long)a0;
- (void)_startProcessingRequest;
- (void)_finishProcessingRequest:(id)a0;
- (void)_readBodyWithLength:(unsigned long long)a0 initialData:(id)a1;
- (void)_readChunkedBodyWithInitialData:(id)a0;
- (void)_readRequestHeaders;
- (id)initWithServer:(id)a0 localAddress:(id)a1 remoteAddress:(id)a2 socket:(int)a3;
- (void)dealloc;
- (void).cxx_destruct;

@end
