@class NSString, NSTimer, BDPODRPluginFileBasicModel, NSObject, BDPODRPluginCodeDownloader;
@protocol OS_dispatch_queue;

@interface BDPODRPluginFileDownloader : NSObject <BDPODRXResolveDelegate, BDPNetworkTaskProtocol>

@property (retain, nonatomic) BDPODRPluginFileBasicModel *model;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mergeSerialQueue;
@property (retain, nonatomic) NSTimer *timerOutTimer;
@property (nonatomic) double downloadBeginTimeStamp;
@property (copy, nonatomic) NSString *gamePackagePath;
@property (copy, nonatomic) NSString *codesXzPath;
@property (nonatomic) BOOL codesDone;
@property (nonatomic) BOOL finished;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (copy, nonatomic) id /* block */ successBlock;
@property (retain, nonatomic) BDPODRPluginCodeDownloader *codeDownloader;
@property (nonatomic) BOOL isPlugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pluginDownloaderWithModel:(id)a0 pluginID:(id)a1;

- (void)_trackLoadStartEvent:(id)a0;
- (void)_executeFailureBlock:(id)a0;
- (void)_executeSuccessBlockIfNeeded;
- (void)_setupTimeoutTimer;
- (void)_trackLoadResultEvent:(id)a0 filePath:(id)a1 loadType:(id)a2;
- (void)_cleanTempFiles;
- (void)_resetCallBackBlocks;
- (void)_cleanAllFiles;
- (void)startDownload:(id)a0 suceess:(id /* block */)a1 failure:(id /* block */)a2;
- (void)_invalidateTimer;
- (void).cxx_destruct;
- (void)suspend;
- (id)init;
- (void)resume;
- (void)dealloc;
- (void)cancel;
- (void)stopDownload;

@end
