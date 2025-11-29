@class NSString;
@protocol LQTDepositPlanDeleteDelegate;

@interface LQTDepositPlanDelete : NSObject <WCPayLQTDepositManagePlanCgiDelegate>

@property (weak) id<LQTDepositPlanDeleteDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
