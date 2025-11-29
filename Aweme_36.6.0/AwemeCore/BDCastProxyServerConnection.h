@class NSString;

@interface BDCastProxyServerConnection : BDCastGCDWebServerConnection

@property (nonatomic) long long totalBytesWrite;
@property (nonatomic) double openTimestamp;
@property (copy, nonatomic) NSString *requestId;

- (id)preflightRequest:(id)a0;
- (id)overrideResponse:(id)a0 forRequest:(id)a1;
- (void)abortRequest:(id)a0 withStatusCode:(long long)a1;
- (id)rewriteRequestURL:(id)a0 withMethod:(id)a1 headers:(id)a2;
- (void)didReadBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)didWriteBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)close;
- (void).cxx_destruct;
- (BOOL)open;
- (void)dealloc;
- (void)processRequest:(id)a0 completion:(id /* block */)a1;

@end
