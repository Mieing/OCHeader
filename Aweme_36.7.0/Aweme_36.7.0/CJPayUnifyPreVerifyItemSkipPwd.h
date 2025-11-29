@interface CJPayUnifyPreVerifyItemSkipPwd : CJPayUnifyPreVerifyItemBase

- (id)checkType;
- (id)checkTypeName;
- (void)startVerifyWithParams:(id)a0;
- (void)trackForVerifyResult:(id)a0;
- (unsigned long long)verifyType;

@end
