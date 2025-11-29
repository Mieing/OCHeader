@class NSString, BDCastGCDWebServer;
@protocol BDByteLinkSinkPlayerDelegate;

@interface BDByteLinkSinkPlayer : NSObject {
    void *_handler;
}

@property (retain, nonatomic) NSString *byteLinkPath;
@property (copy, nonatomic) NSString *ipAddress;
@property (copy, nonatomic) NSString *contextId;
@property (retain, nonatomic) BDCastGCDWebServer *webSever;
@property (nonatomic) BOOL needRebuild;
@property (nonatomic) double backgroundEnterTime;
@property (weak, nonatomic) id<BDByteLinkSinkPlayerDelegate> delegate;
@property (nonatomic) BOOL isStart;
@property (nonatomic) int port;
@property (nonatomic) long long logLevel;

+ (id)versionStr;

- (void)sendMetaMessage:(id)a0;
- (id)initWithIp:(id)a0 llamaEnabled:(BOOL)a1 logLevel:(long long)a2 delegate:(id)a3;
- (void)createDocumentPathIfNeeded;
- (int)byteLinkLogLeverFrom:(long long)a0;
- (id)initWithIp:(id)a0 logLevel:(long long)a1 delegate:(id)a2;
- (long long)bdCastSinkLogLevelFrom:(int)a0;
- (void)decodeInputWithId:(id)a0 frameCount:(unsigned long long)a1;
- (void)decodeOutputWithId:(id)a0 frameCount:(unsigned long long)a1;
- (void)renderFrameWithId:(id)a0 frameCount:(unsigned long long)a1;
- (void)sendMetaMessage:(id)a0 withIp:(id)a1;
- (void)disconnectWithIp:(id)a0;
- (void)reverseConnect:(id)a0 port:(unsigned long long)a1;
- (void)reverseDisconnect;
- (void)setLogEnable:(BOOL)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (BOOL)start;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (int)validPort;
- (id)infoString;
- (BOOL)hasConnection;

@end
