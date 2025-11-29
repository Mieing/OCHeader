@class NSString, CJPayHalfVerifySMSViewController;

@interface CJPayUnifyPreVerifyItemSMS : CJPayUnifyPreVerifyItemBase

@property (retain, nonatomic) CJPayHalfVerifySMSViewController *smsVC;
@property (copy, nonatomic) NSString *inputContent;

- (void)event:(id)a0 params:(id)a1;
- (id)checkType;
- (id)checkTypeName;
- (BOOL)handleConfirmResponse:(id)a0;
- (void)startVerifyWithParams:(id)a0;
- (id)p_createSmsVC;
- (id)p_buildSignCardParamsWithInputStr:(id)a0;
- (id)_buildHelpModel:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)verifyType;

@end
