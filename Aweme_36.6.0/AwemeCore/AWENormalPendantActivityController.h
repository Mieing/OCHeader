@class NSString, AWEActivityConfigModel, AWEAwemeModel;
@protocol AWEActivityStatusChangeProtocol;

@interface AWENormalPendantActivityController : NSObject <AWEPendantActivityControlProtocol>

@property (nonatomic) long long currentViewCount;
@property (nonatomic) long long autoFoldThreshold;
@property (nonatomic) long long timeSpentInNearbyTab;
@property (retain, nonatomic) NSString *capsuleTimerIdentifier;
@property (retain, nonatomic) NSString *nearbyPendantShowTimerIdentifier;
@property (retain, nonatomic) AWEAwemeModel *currentAweme;
@property (nonatomic) BOOL hasConfig;
@property (weak, nonatomic) id<AWEActivityStatusChangeProtocol> delegate;
@property (nonatomic) BOOL displayingSkylightView;
@property (nonatomic) BOOL displayingPublishProgress;
@property (nonatomic) BOOL isUsingInternalResource;
@property (retain, nonatomic) AWEActivityConfigModel *configModel;
@property (nonatomic) unsigned long long baseViewType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPendantViewIfNeeded;
- (void)feedContainerViewControllerDidSwitchTab:(id)a0;
- (void)trackLogWithKey:(id)a0 message:(id)a1;
- (void)feedTableViewControllerWillPlayAweme:(id)a0;
- (void)tappedAction;
- (void)hidePendantViewWhenUpdateActivityController;
- (id)initWithConfigModel:(id)a0 delegate:(id)a1;
- (BOOL)shouldHideInCurrentPage:(id)a0 isSwitchTab:(BOOL)a1;
- (void)updateMessageOnPendantIfNeed;
- (void)showMessageOnCapsuleIfNeeded;
- (void)routerToMainVenue;
- (void)delayUpadeAutoFoldCount:(id)a0;
- (void)updateAutoFoldCountDownWith:(id)a0;
- (void)showBubbleMessageWithKey:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dismissAction;
- (void)setupNotifications;

@end
