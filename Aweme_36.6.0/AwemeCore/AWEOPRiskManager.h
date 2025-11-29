@interface AWEOPRiskManager : NSObject

+ (BOOL)hasRiskWithData:(id)a0;
+ (void)mergeAuthRiskInfo:(id)a0 riskParams:(id)a1;
+ (void)handleRiskDataIfNeeded:(id)a0 delegate:(id)a1;
+ (void)showRiskDialogWithData:(id)a0 delegate:(id)a1;
+ (void)showVerifyCodeViewWithData:(id)a0 delegate:(id)a1;
+ (void)showHighRiskPageWithDelegate:(id)a0;
+ (id)sharedInstance;

@end
