@class NSMutableDictionary, AWEActivityPendantView, NSString, AWEActivityConfigModel, NSMutableArray, UIView;
@protocol AWEPendantActivityControlProtocol, AWEActivityResourceManagerProtocol;

@interface AWEActivityControllerManager : NSObject <AWEActivityStatusChangeProtocol>

@property (retain, nonatomic) NSMutableDictionary *activityData;
@property (retain, nonatomic) id<AWEPendantActivityControlProtocol> currentActivityControllor;
@property (retain, nonatomic) id<AWEActivityResourceManagerProtocol> resourceManager;
@property (retain, nonatomic) AWEActivityPendantView *activityPendant;
@property (retain, nonatomic) NSMutableArray *pendantPriority;
@property (retain, nonatomic) AWEActivityConfigModel *currentActivityData;
@property (retain, nonatomic) AWEActivityConfigModel *nextActivityData;
@property (nonatomic) BOOL isBaseViewShown;
@property (weak, nonatomic) UIView *baseView;
@property (nonatomic) unsigned long long baseViewType;
@property (copy, nonatomic) NSString *managerName;
@property (nonatomic, getter=isPendantHiddened) BOOL pendantHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObservation;
- (void)trackLogWithKey:(id)a0 message:(id)a1;
- (double)heightToStatusBar;
- (void)continueNearbyPendantShowCountDown:(BOOL)a0;
- (void)cleanActivityDataAndCancelTimer;
- (void)enterPendantShowProgress;
- (void)enterPendantShowProgressWhenDataUpdated;
- (void)selectActivityController;
- (void)updateActivityData;
- (id)getSuperiorActivityModelWithTime:(double)a0;
- (void)checkCurrentActivity:(id)a0;
- (void)replaceActivityControllerWithModel:(id)a0;
- (void)loadResourceWithModel:(id)a0 completion:(id /* block */)a1;
- (id)superiorActivityControllor;
- (void)configActivityViewWithModel:(id)a0;
- (void)switchPendantViewState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)registerTapHandler:(id /* block */)a0 dismissHandler:(id /* block */)a1;
- (unsigned long long)pendantViewState;
- (void)enableLottieAnimation:(BOOL)a0;
- (void)hideCapsuleView;
- (void)showCapsuleMessage:(id)a0;
- (void)showMessageOnBubble:(id)a0;
- (void)registerStatusChangeCompletion:(id /* block */)a0;
- (void)loadLottieResourceWithModel:(id)a0 completion:(id /* block */)a1;
- (void)loadPNGImageResourceWithModel:(id)a0 completion:(id /* block */)a1;
- (id)currentMessageOnCapsule;
- (id)getNextActivityModelWithTime:(double)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithResourceManager:(id)a0;

@end
