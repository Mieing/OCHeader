@class NSDictionary, UIViewController, NSString;
@protocol AWEECMallEntranceHostProtocol;

@interface AWEECNewEntranceRollBackBaseHandler : NSObject <AWETabMallHalfScreenCycleProtocol>

@property (weak, nonatomic) UIViewController<AWEECMallEntranceHostProtocol> *hostVC;
@property (copy, nonatomic) NSDictionary *currentRouterParams;
@property (nonatomic) BOOL isHalfScreenShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveMemoryWarningNotification;
- (void)bindViewHost:(id)a0;
- (void)abilityModify:(id)a0;
- (void)modifySmallWindow:(id)a0 extraParams:(id)a1;
- (void)modifyRollback:(id)a0 extraParams:(id)a1;
- (id)rollBackEntranceForAbilityModify;
- (void)p_handlerRollBackBtn:(id)a0;
- (void)p_tryAddRollBackToWindow;
- (void)p_tryReleaseRollBackSceneWithAct:(BOOL)a0;
- (BOOL)isDeliveryFullScreen;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
