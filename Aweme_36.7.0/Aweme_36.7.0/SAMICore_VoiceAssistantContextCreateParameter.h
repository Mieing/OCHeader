@class NSString, NSArray;
@protocol SAMICoreCallbackListener;

@interface SAMICore_VoiceAssistantContextCreateParameter : NSObject

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *header;
@property (retain, nonatomic) NSString *protoVersion;
@property (retain, nonatomic) NSString *appKey;
@property (nonatomic) long long tokenType;
@property (retain, nonatomic) NSString *token;
@property (nonatomic) int connectTimeout;
@property (nonatomic) BOOL enableTransferRetry;
@property (retain, nonatomic) NSArray *retryTimeArray;
@property (retain, nonatomic) NSString *businessInfo;
@property (retain, nonatomic) id<SAMICoreCallbackListener> listener;
@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSString *dumpDir;
@property (nonatomic) BOOL enableConnectPool;
@property (retain, nonatomic) NSString *connectPoolBusiness;
@property (nonatomic) int retryPingPongTimeout;
@property (nonatomic) int pingPongInterval;
@property (nonatomic) int encodeFrameSize;
@property (nonatomic) int sendBufferSize;
@property (nonatomic) BOOL enableFrontier;
@property (nonatomic) BOOL enableHostTransport;

- (void)dealloc;

@end
