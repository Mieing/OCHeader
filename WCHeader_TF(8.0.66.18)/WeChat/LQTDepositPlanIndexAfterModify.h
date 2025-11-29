@class NSString;
@protocol LQTDepositPlanIndexAfterModifyDelegate;

@interface LQTDepositPlanIndexAfterModify : NSObject <WCPayLQTDepositPlanIndexCgiDelegate>

@property (weak) id<LQTDepositPlanIndexAfterModifyDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
