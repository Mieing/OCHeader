@class AWEHPTabLandingRollBackFloatButton, AWEHPLandingTabRollBackTask, NSString;
@protocol AWELeftSideBarManagerAbilityProtocol;

@interface AWEHPLeftSideBarRollbackPluginController : NSObject <AWEHPLeftSideBarPluginControllerProtocol>

@property (weak, nonatomic) id<AWELeftSideBarManagerAbilityProtocol> ability;
@property (retain, nonatomic) AWEHPTabLandingRollBackFloatButton *rollBackComponent;
@property (retain, nonatomic) AWEHPLandingTabRollBackTask *rollBackTask;
@property (nonatomic) long long dismissType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_dismissComponentIfNeedWithType:(long long)a0;
- (void)p_showRollBackComponentIfNeed;
- (void)p_buttonDidDismiss;
- (void)onLeftSideBarDidOpen:(id)a0;
- (void)onLeftSideBarDidClose:(id)a0;
- (void)onLeftSideBarViewWillDisAppear:(id)a0;
- (void)onLeftSideBarViewDidDisAppear:(id)a0;
- (void)leftSideBarBeginLanding:(id)a0 withModel:(id)a1;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)dealloc;

@end
