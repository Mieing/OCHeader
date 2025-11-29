@class NSString, NSObject;
@protocol OS_dispatch_queue, MMXp2pWrapperDelegate;

@interface MMXp2pWrapper : NSObject <CNetworkStatusExt> {
    NSString *_p2pStreamId;
    NSString *_host;
    BOOL _needUpdateP2pService;
    BOOL _p2pStarted;
    NSString *_token;
    BOOL _p2pDebugStatus;
    unsigned long long _initTime;
}

@property BOOL bStartP2pService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *p2pProcessingQueue;
@property (nonatomic, setter=setBPostDelayStopP2p:) BOOL bPostDelayStopP2p;
@property (weak, nonatomic) id<MMXp2pWrapperDelegate> delegate;
@property (nonatomic) unsigned int p2pSwitch;
@property (nonatomic) unsigned int p2pUploadSwitch;
@property (nonatomic) unsigned int p2pDownloadMnSwitch;
@property (nonatomic) unsigned int p2pStatSwitch;
@property (nonatomic) unsigned int p2pDebugLogSwitch;
@property (nonatomic) unsigned int p2pMaxLoad;
@property (nonatomic) unsigned int p2pMaxBufferSize;
@property (nonatomic) unsigned int p2pUploadDawangkaSwitch;
@property (retain, nonatomic) NSString *p2pAppid;
@property (retain, nonatomic) NSString *p2pKey;
@property (retain, nonatomic) NSString *p2pSecret;
@property (nonatomic) unsigned int p2pVerifyStream;
@property (retain) NSString *cdnPlayUrl;
@property (retain) NSString *p2pDomain;

+ (id)sharedInstance;
+ (void)destroySharedInstance;

- (id)initInternal;
- (void)dealloc;
- (void)startP2pService;
- (int)initWith:(id)a0 appKey:(id)a1 appSecretKey:(id)a2;
- (id)replacePlaybackUrl:(id)a0 streamId:(id)a1 bHttps:(BOOL)a2;
- (id)version;
- (void)enableDebug;
- (void)disableDebug;
- (void)setLogger;
- (void)alias:(id)a0 of:(id)a1;
- (int)resume;
- (id)host;
- (id)proxyOf:(id)a0;
- (void)getStat;
- (void)updateStreamId:(id)a0;
- (void)updateP2pService;
- (void)updateP2pSwitches:(unsigned int)a0 p2pUpload:(unsigned int)a1 p2pDownloadMn:(unsigned int)a2 p2pStat:(unsigned int)a3 p2pDebugLog:(unsigned int)a4 p2pMaxLoad:(unsigned int)a5 p2pMaxBufferSize:(unsigned int)a6 p2pUploadDawangka:(unsigned int)a7 p2pAppid:(id)a8 p2pKey:(id)a9 p2pSecret:(id)a10 p2PVerifyStream:(unsigned int)a11 p2pDomain:(id)a12;
- (id)randomStringWithLength;
- (void)runSyncOnP2pQueue:(id /* block */)a0;
- (void)runSyncOnP2pQueueTimeout:(id /* block */)a0;
- (void)runAsyncOnP2pQueue:(id /* block */)a0;
- (void)runOnMainThread:(id /* block */)a0;
- (void)destroyClean;
- (void)reset;
- (void)realStopP2P;
- (void).cxx_destruct;

@end
