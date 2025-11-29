@class BDCastStreamProducer, NSString, BDCastProxyStreamedResponse, BDCastProxyRemuxer, BDCastProxyServerConnection, BDCastFLVStreamProducer;

@interface BDCastProxyDataRequest : BDCastGCDWebServerDataRequest

@property (nonatomic) BOOL cancelCalled;
@property (copy, nonatomic) NSString *requestId;
@property (weak, nonatomic) BDCastProxyServerConnection *connection;
@property (nonatomic) double requestCreatedTime;
@property (nonatomic) double responseStartTime;
@property (copy, nonatomic) NSString *mediaType;
@property (copy, nonatomic) NSString *encryptType;
@property (copy, nonatomic) NSString *originalUrl;
@property (copy, nonatomic) NSString *resolution;
@property (retain, nonatomic) BDCastProxyStreamedResponse *response;
@property (retain, nonatomic) BDCastProxyRemuxer *remuxer;
@property (retain, nonatomic) BDCastFLVStreamProducer *flvStreamProducer;
@property (retain, nonatomic) BDCastStreamProducer *streamProducer;
@property BOOL isResponseEndTracked;
@property (copy, nonatomic) id /* block */ onCompletionBlock;
@property (readonly, nonatomic) unsigned long long totalBytesRead;
@property (readonly, nonatomic) unsigned long long totalBytesWritten;
@property (nonatomic) double lastActivityTime;
@property (nonatomic) unsigned long long lastBytesRead;
@property (nonatomic) unsigned long long lastBytesWritten;

- (id)initWithMethod:(id)a0 url:(id)a1 headers:(id)a2 path:(id)a3 query:(id)a4;
- (void)extractRequestInfo;
- (BOOL)headerKeysContainsKey:(id)a0;
- (BOOL)headerKeysContainsKeys:(id)a0;
- (BOOL)isClientSameAsServer;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;

@end
