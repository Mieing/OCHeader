@class NSArray, NSString;
@protocol AWEAntiAddictAction;

@interface AWEAntiAddictConsumer : NSObject <AWEAntiAddictLogProtocol>

@property (retain, nonatomic) id<AWEAntiAddictAction> currentAction;
@property (retain, nonatomic) id<AWEAntiAddictAction> pendingAction;
@property (retain, nonatomic) NSArray *triggerListeners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleName;

- (void)setupTriggerListener;
- (BOOL)shouldAvoidCampaignPopup:(id)a0;
- (void)revokeAction:(id)a0;
- (void)configAction:(id)a0;
- (void)beginAction:(id)a0;
- (void)revokeAction:(id)a0 shouldPerformRevoke:(BOOL)a1;
- (void)triggerActionBeginByListener:(long long)a0;
- (void)triggerActionEndByListener:(long long)a0;
- (void)triggerActionRevokeByListener:(long long)a0 shouldPerformRevoke:(BOOL)a1;
- (id)consumeDecision:(id)a0;
- (void)revokeExpiredActions;
- (BOOL)insertDecision:(id)a0 triggerImmediately:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
