@class NSString, NSDictionary, BDUGLuckyMemoryMonitorSettingsModel, BDUGLuckyMemoryMonitorRecorder, UIViewController;
@protocol BDXContainerProtocol;

@interface BDUGLuckyMemoryMonitor : NSObject <BDUGLuckyMemoryMonitorProtocol>

@property (retain, nonatomic) BDUGLuckyMemoryMonitorSettingsModel *config;
@property (copy, nonatomic) NSDictionary *nativeConfigMap;
@property (copy, nonatomic) NSDictionary *feConfigMap;
@property (copy, nonatomic) NSDictionary *routingConfigMap;
@property (weak, nonatomic) UIViewController *nativeSceneRecordingVC;
@property (retain, nonatomic) BDUGLuckyMemoryMonitorRecorder *nativeSceneRecorder;
@property (weak, nonatomic) id<BDXContainerProtocol> feSceneRecordingContainer;
@property (retain, nonatomic) BDUGLuckyMemoryMonitorRecorder *feSceneRecorder;
@property (copy, nonatomic) NSString *routerSceneRecordingSchema;
@property (retain, nonatomic) BDUGLuckyMemoryMonitorRecorder *routerSceneRecorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)settingsDidUpdate;
+ (id)sharedInstance;
+ (id)serviceProtocol;

- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerOnHide:(id)a0 sourceParam:(id)a1;
- (void)containerWillStartLoading:(id)a0;
- (void)containerDidClose:(id)a0;
- (void)routerDidBeginTransferWithURLString:(id)a0;
- (void)routerDidTransferWithURLString:(id)a0 vcClassName:(id)a1;
- (void)routerDidFailTransferWithURLString:(id)a0;
- (void)__updateSettingsWithDictionary:(id)a0;
- (void)__vcInitWithVCName:(id)a0 vc:(id)a1;
- (void)__appResignActive:(id)a0;
- (void)__vcWillAppearNotification:(id)a0;
- (void)__vcDidDisappearNotification:(id)a0;
- (void)__vcWillAppearWithVCName:(id)a0 vc:(id)a1;
- (BOOL)__markRecordedObject:(id)a0;
- (void)__setupNativeSceneRecorder:(id)a0;
- (void)__setupDeallocObserverForObject:(id)a0 recorder:(id)a1;
- (id)__sourceURLWithOriginURLComp:(id)a0;
- (void)__setupFESceneRecorder:(id)a0;
- (id)__hostPathWithURL:(id)a0;
- (id)__extractAndJoinParams:(id)a0 fromURL:(id)a1;
- (void)__setupRouterSceneRecorder:(id)a0;
- (void)__setupSceneRecorder:(id)a0 resetter:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
