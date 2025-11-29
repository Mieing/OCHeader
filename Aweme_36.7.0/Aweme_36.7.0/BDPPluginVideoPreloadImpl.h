@class NSString;
@protocol BDPVideoPreloadStateDelegate;

@interface BDPPluginVideoPreloadImpl : NSObject <BDPVideoPreloadPluginDelegate, GenerateFileKeyDelegate>

@property (weak, nonatomic) id<BDPVideoPreloadStateDelegate> stateDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (id)generateFileKey:(id)a0 hlsFileKey:(id)a1 infos:(id)a2;
- (void)bdp_addPreloadTaskWithModelSrc:(id)a0 completion:(id /* block */)a1 stateDelegate:(id)a2;
- (void)bdp_addPreloadTaskWithModelVid:(id)a0 completion:(id /* block */)a1 stateDelegate:(id)a2;
- (void)bdp_addPreloadTaskWithModelVideoModel:(id)a0 completion:(id /* block */)a1 stateDelegate:(id)a2;
- (void)bdp_cancelPreloadTaskWithKey:(id)a0 completion:(id /* block */)a1;
- (void)bdp_cancelPreloadTaskWithVid:(id)a0 completion:(id /* block */)a1;
- (void)bdp_addPreloadTaskWithModelSrcNew:(id)a0 completion:(id /* block */)a1 stateDelegate:(id)a2;
- (BOOL)hlsMDLMpIdEnable:(id)a0;
- (id)infoFromFailReason:(id)a0 taskId:(long long)a1;
- (unsigned long long)resolutionFromString:(id)a0;
- (void).cxx_destruct;

@end
