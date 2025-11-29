@class NSString;
@protocol LQTDepositPlanIndexAfterDetailDelegate;

@interface LQTDepositPlanIndexAfterDetail : NSObject <WCPayLQTDepositPlanIndexCgiDelegate>

@property (weak) id<LQTDepositPlanIndexAfterDetailDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
