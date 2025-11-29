@class IESLiveRevenueInteractLynxComponent, NSMutableDictionary, NSString, IESLiveRevenueInteractLynxDataManager;

@interface IESLiveRevenueInteractLynxManager : NSObject <IESLiveRevenueInteractInnerAction, IESLiveRevenueInteractLynxManager>

@property (retain, nonatomic) NSMutableDictionary *lynxComponents;
@property (nonatomic) unsigned long long scene;
@property (weak, nonatomic) IESLiveRevenueInteractLynxComponent *lynxControlCenter;
@property (retain, nonatomic) IESLiveRevenueInteractLynxDataManager *dataManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)bindAction;
- (void)componentContainerFrameChanged;
- (void)didReadyToPlay:(unsigned long long)a0;
- (void)handleLynxComponentsByEvent:(long long)a0 withConfigs:(id)a1;
- (id)mLinkerProvider;
- (BOOL)showBuildVersion;
- (id)interactProvider;
- (id)getAnchorLinkInfo:(id)a0;
- (id)getAnchorPKInfo:(id)a0;
- (id)initWithDIContext:(id)a0 scene:(unsigned long long)a1;
- (void)setupLynxComponentContainerIfNeeded;
- (void)cleanupBeforeDealloc;
- (void)bringComponentViewToFrontIfNeeded;
- (id)pkProvider;
- (BOOL)checkIfFrameCanCreateComponent;
- (void)loadLynxControlCenter;
- (BOOL)enableLynxDebug;
- (void)loadLynxComponentsWithConfigs:(id)a0;
- (id)transJsonStringToConfig:(id)a0;
- (void)updateLynxComponentsLayoutWithConfigs:(id)a0;
- (void)unloadLynxComponentsWithConfigs:(id)a0;
- (void)notifyLynxComponentDidChange:(long long)a0 configs:(id)a1;
- (void)unloadAllComponents;
- (BOOL)sendDataFromLynxComponent:(id)a0 toTargetComponents:(id)a1 withData:(id)a2;
- (void).cxx_destruct;

@end
