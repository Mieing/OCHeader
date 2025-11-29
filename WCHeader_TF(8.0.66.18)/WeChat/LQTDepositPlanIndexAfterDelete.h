@class NSString;
@protocol LQTDepositPlanIndexAfterDeleteDelegate;

@interface LQTDepositPlanIndexAfterDelete : NSObject <WCPayLQTDepositPlanIndexCgiDelegate>

@property (weak) id<LQTDepositPlanIndexAfterDeleteDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
