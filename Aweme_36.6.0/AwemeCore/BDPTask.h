@class BDPPluginInfoLoadRecorder, WKProcessPool, BDPGameCommunityEntranceManager, BDXBridgeEventSubscriber, NSDictionary, BDPFloatBallManager, BDPGameGrowthCenterManager, UIViewController, NSUUID, BDPUniqueID, UIView, BDPAppConfig, NSString, BDPBasicAppTask, UIImage;
@protocol BDPBaseVCProtocol, BDPRuntimeServiceLoader, BDPEngineProtocol, BDPLiveEngineProtocol, BDPMessengerPrototol, BDPlatformContainerProtocol, BDPLoadInstanceProtocol, BDPBusinessEngineProtocol, BDPBusinessEngineMetricsProtocol;

@interface BDPTask : NSObject <BDPReachabilityStateDelegate, BDPIndustrySDKManagerClient>

@property (nonatomic, getter=isHideShareMenu) BOOL hideShareMenu;
@property (nonatomic, getter=isHighPerformance) BOOL highPerformance;
@property (nonatomic, getter=isHighPerformancePlus) BOOL highPerformancePlus;
@property (nonatomic, getter=isMetal) BOOL enableMetal;
@property (nonatomic, getter=isKryptonMerged) BOOL kryptonMerged;
@property (nonatomic, getter=isCombineLoadingView) BOOL combineLoadingView;
@property (retain, nonatomic) BDPAppConfig *config;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) WKProcessPool *processPool;
@property (retain, nonatomic) BDXBridgeEventSubscriber *lynxPageEventSubscriber;
@property (retain, nonatomic) BDPBasicAppTask *customTask;
@property (retain, nonatomic) id<BDPBusinessEngineProtocol, BDPMessengerPrototol, BDPBusinessEngineMetricsProtocol> engine;
@property (weak, nonatomic) id<BDPEngineProtocol> renderEngine;
@property (copy, nonatomic) NSString *renderEngineName;
@property (weak, nonatomic) UIViewController<BDPlatformContainerProtocol, BDPBaseVCProtocol> *containerVC;
@property (retain, nonatomic) id<BDPLoadInstanceProtocol> loadInstance;
@property (nonatomic, getter=isDebugRuntime) BOOL debugRuntime;
@property (nonatomic) BOOL frontendDebugRuntime;
@property (copy, nonatomic) NSString *lastPagePath;
@property (copy, nonatomic) NSString *lastPageQuery;
@property (retain, nonatomic) UIImage *lastScreenShootImage;
@property (retain, nonatomic) id<BDPRuntimeServiceLoader> runtimeServiceLoader;
@property (weak, nonatomic) UIView *outerContainer;
@property (weak, nonatomic) UIView *outerSubContainer;
@property (weak, nonatomic) UIViewController *outerController;
@property (retain, nonatomic) BDPPluginInfoLoadRecorder *pluginLoadInfoRecorder;
@property (nonatomic) long long toolbarStyle;
@property (copy, nonatomic) NSDictionary *toolbarVisibility;
@property (retain, nonatomic) BDPFloatBallManager *floatBallManager;
@property (retain, nonatomic) BDPGameCommunityEntranceManager *communityEntranceManager;
@property (weak, nonatomic) id<BDPLiveEngineProtocol> liveEngine;
@property (readonly, nonatomic) BDPGameGrowthCenterManager *gameGrowthCenterManager;
@property (retain, nonatomic) NSUUID *webComponentUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onNetworkWeakStatusChanged:(id)a0;
- (id)initWithModel:(id)a0 configDict:(id)a1 schema:(id)a2;
- (void)updateConfigJSON:(id)a0 configDict:(id)a1;
- (void)setHighPerformance:(BOOL)a0;
- (void)setHighPerformancePlus:(BOOL)a0;
- (void)setKryptonMerged:(BOOL)a0;
- (void)setHideShareMenu:(BOOL)a0;
- (void)setEnableMetal:(BOOL)a0;
- (void)setCombineLoadingView:(BOOL)a0;
- (BOOL)isEnableMetal;
- (void)updateWithModel:(id)a0 configDict:(id)a1;
- (void)updateRefererConfig:(id)a0;
- (void).cxx_destruct;
- (void)onReachabilityChange:(unsigned long long)a0;
- (void)dealloc;

@end
