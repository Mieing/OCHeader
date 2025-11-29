@class NSString;
@protocol LQTDepositPreAddPlanAfterDeleteDelegate;

@interface LQTDepositPreAddPlanAfterDelete : NSObject <WCPayLQTDepositPreAddPlanCgiDelegate>

@property (weak) id<LQTDepositPreAddPlanAfterDeleteDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
