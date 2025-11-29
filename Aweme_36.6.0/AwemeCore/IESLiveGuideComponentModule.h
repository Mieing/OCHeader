@class IESLiveGuideAbilityManager, NSString, IESLiveGuideContainerContext;
@protocol IESLiveComponentBootLoaderProtocol, IESLiveGeneralService;

@interface IESLiveGuideComponentModule : IESLiveGuideExecutionBaseModule <IESLiveComponentLifeCycleNotifier>

@property (retain, nonatomic) IESLiveGuideAbilityManager *guideAbilityManager;
@property (retain, nonatomic) id<IESLiveGeneralService> guideGeneralServiceManager;
@property (retain, nonatomic) id<IESLiveComponentBootLoaderProtocol> componentLoader;
@property (nonatomic) BOOL isComponentInstalled;
@property (retain, nonatomic) IESLiveGuideContainerContext *containerContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateLiveModel:(id)a0;
- (void)componentMountDidFinishForLevel:(long long)a0;
- (void)componentDestroyDidFinishForLevel:(long long)a0;
- (void)componentFirstFrameDidStartLoad;
- (void)componentFirstFrameDidFinishWithCost:(double)a0;
- (void)updateOpenLiveModel:(id)a0;
- (void)subscribeExecutionMessage;
- (void)initialize:(id)a0 params:(id)a1;
- (void)viewWillAppear:(id)a0 params:(id)a1;
- (void)viewDidAppear:(id)a0 params:(id)a1;
- (void)viewWillDisappear:(id)a0 params:(id)a1;
- (void)viewDidDisappear:(id)a0 params:(id)a1;
- (void)closeGuideVC;
- (void)willStartOpenLive:(id)a0;
- (void)componentInstallForGuideModel:(id)a0;
- (id)supportScenesOpt:(BOOL)a0;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
