@class PreEnterShowPolicyListConfig, NSString, WCPolicyListControlLogic;

@interface PreEnterShowPolicyListStep : PreEnterBaseStep

@property (retain, nonatomic) PreEnterShowPolicyListConfig *configObj;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) WCPolicyListControlLogic *policyListLogic;
@property (readonly, nonatomic) NSString *policylist;

- (id)initWithMsg:(id)a0;
- (id)configWithContent:(id)a0;
- (void)startStep;
- (void)finishStep;
- (void).cxx_destruct;

@end
