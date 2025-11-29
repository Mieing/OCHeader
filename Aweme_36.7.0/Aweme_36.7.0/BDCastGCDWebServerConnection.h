@class BDCastGCDWebServerResponse, BDCastGCDWebServer, NSString, NSData, BDCastGCDWebServerHandler, BDCastGCDWebServerRequest;

@interface BDCastGCDWebServerConnection : NSObject {
    int _socket;
    BOOL _virtualHEAD;
    struct __CFHTTPMessage { } *_requestMessage;
    BDCastGCDWebServerRequest *_request;
    BDCastGCDWebServerHandler *_handler;
    struct __CFHTTPMessage { } *_responseMessage;
    BDCastGCDWebServerResponse *_response;
    long long _statusCode;
    BOOL _opened;
}

@property (readonly, nonatomic) BDCastGCDWebServer *server;
@property (readonly, nonatomic, getter=isUsingIPv6) BOOL usingIPv6;
@property (readonly, nonatomic) NSData *localAddressData;
@property (readonly, nonatomic) NSString *localAddressString;
@property (readonly, nonatomic) NSData *remoteAddressData;
@property (readonly, nonatomic) NSString *remoteAddressString;
@property (readonly, nonatomic) unsigned long long totalBytesRead;
@property (readonly, nonatomic) unsigned long long totalBytesWritten;

+ (void)initialize;

- (id)initWithServer:(id)a0 localAddress:(id)a1 remoteAddress:(id)a2 socket:(int)a3;
- (id)preflightRequest:(id)a0;
- (void)_finishProcessingRequest:(id)a0;
- (id)overrideResponse:(id)a0 forRequest:(id)a1;
- (void)_initializeResponseHeadersWithStatusCode:(long long)a0;
- (void)writeBodyWithCompletionBlock:(id /* block */)a0;
- (void)writeHeadersWithCompletionBlock:(id /* block */)a0;
- (void)abortRequest:(id)a0 withStatusCode:(long long)a1;
- (void)_startProcessingRequest;
- (void)readBodyWithRemainingLength:(unsigned long long)a0 completionBlock:(id /* block */)a1;
- (void)readNextBodyChunk:(id)a0 completionBlock:(id /* block */)a1;
- (id)rewriteRequestURL:(id)a0 withMethod:(id)a1 headers:(id)a2;
- (void)_readChunkedBodyWithInitialData:(id)a0;
- (void)_readBodyWithLength:(unsigned long long)a0 initialData:(id)a1;
- (void)writeData:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)readHeaders:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)_readRequestHeaders;
- (void)didReadBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)readData:(id)a0 withLength:(unsigned long long)a1 completionBlock:(id /* block */)a2;
- (void)didWriteBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)close;
- (void).cxx_destruct;
- (BOOL)open;
- (void)dealloc;
- (void)processRequest:(id)a0 completion:(id /* block */)a1;

@end
