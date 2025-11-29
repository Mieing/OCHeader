@class NSString, NSDictionary, NSTimer, IESLiveNativeAppShareScreenManagerConfiguration, BDLOCNativeAppInstance;
@protocol IESLiveOpenPlatformShareScreenService, IESLiveInteractOpenContainerCastInterface;

@interface IESLiveNativeAppShareScreenManager : NSObject <BDLOCNativeAppScreenRecordDelegate>

@property (retain, nonatomic) id<IESLiveOpenPlatformShareScreenService> shareScreenService;
@property (copy, nonatomic) NSString *currentPagePath;
@property (copy, nonatomic) NSDictionary *currentQueryDict;
@property (retain, nonatomic) NSTimer *seiTimer;
@property (readonly, nonatomic) id<IESLiveInteractOpenContainerCastInterface> openContanerCastRouter;
@property (readonly, nonatomic) IESLiveNativeAppShareScreenManagerConfiguration *configuration;
@property (weak, nonatomic) BDLOCNativeAppInstance *nativeAppInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)p_stopTimer;
- (void)screenRecorderWillStartWithAppID:(id)a0 extra:(id)a1 completion:(id /* block */)a2;
- (void)screenRecorderWillStopWithAppID:(id)a0 extra:(id)a1 completion:(id /* block */)a2;
- (void)screenRecorderDidStartWithAppID:(id)a0 extra:(id)a1;
- (void)screenRecorderDidStopWithAppID:(id)a0 extra:(id)a1;
- (void)screenRecorderWithSampleBuffer:(struct __CVBuffer { } *)a0 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 extra:(id)a2;
- (void)screenRecorder:(id)a0 exception:(id)a1 extra:(id)a2;
- (void)screenRecorder:(id)a0 runningStateDidChanged:(long long)a1 extra:(id)a2;
- (void)buttonDidShow:(long long)a0 appID:(id)a1 extra:(id)a2;
- (void)buttonDidClick:(long long)a0 appID:(id)a1 extra:(id)a2;
- (void)pagePathDidChange:(id)a0 queryDict:(id)a1;
- (void)pauseShareScreenForNativeAppWithExtra:(id)a0 completion:(id /* block */)a1;
- (void)resumeShareScreenForNativeAppWithExtra:(id)a0 completion:(id /* block */)a1;
- (void)p_setupSEITimer;
- (id)initWithConfiguration:(id)a0 DIContext:(id)a1;
- (void)forceStopSharingScreenWithError:(id)a0 extra:(id)a1;
- (id)p_getCurrentLiveCategoryString;
- (id)setupOpenPlatformShareScreenModelWithExtra:(id)a0;
- (void)updateContainerInstance:(id)a0;
- (void)updateConfiguration:(id)a0;
- (void).cxx_destruct;

@end
