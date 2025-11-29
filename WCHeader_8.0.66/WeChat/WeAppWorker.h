@class NSString, NSMutableSet, WAJSCoreService, WAWorkerRuntime;

@interface WeAppWorker : NSObject <WAJSEventHandlerContextDelegate, WAWorkerDelegate> {
    WAWorkerRuntime *_context;
}

@property (retain) NSMutableSet *eventHandlers;
@property (retain) NSString *userFile;
@property long long dataSize;
@property (weak, nonatomic) WAJSCoreService *service;
@property (nonatomic) unsigned int workerId;
@property (nonatomic) int bufferId;
@property (retain, nonatomic) NSString *workerPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init:(id)a0 workerId:(unsigned int)a1 service:(id)a2;
- (void)dealloc;
- (void)initWebView;
- (void)initJSContext:(id)a0;
- (void)sendMessage:(id)a0;
- (void)stopWorker;
- (void)releaseWorker;
- (unsigned int)getWorkerId;
- (void)onCreate;
- (id)getFrame;
- (void)onMessage:(id)a0;
- (id)getFrameData;
- (id)getFileData:(id)a0;
- (id)getCompressedFileData:(id)a0 compressionAlgorithm:(id)a1;
- (id)getAppId;
- (void)endWithResult:(id)a0 handler:(id)a1;
- (id)getEventHandler:(id)a0;
- (id)GetWebViewPluginByName:(id)a0;
- (void)setListenBuffer:(int)a0;
- (id)getBase64Buffer;
- (id)getWAContact;
- (void)sendResultBeforeEnd:(id)a0 resultType:(long long)a1 handler:(id)a2;
- (id)getParentViewController;
- (unsigned long long)getLaunchScene;
- (id)getLaunchPagePath;
- (id)getCurrentPagePath;
- (id)getCurrentPageRelativePath;
- (BOOL)isParentViewControllerDidAppear:(id)a0;
- (id)sourceOpenSDKAppID;
- (id)getCurrentPageQuery;
- (unsigned long long)getEnvironmentType;
- (void).cxx_destruct;

@end
