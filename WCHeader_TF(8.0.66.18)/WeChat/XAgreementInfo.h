@interface XAgreementInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long funcsSwitch;
@property (nonatomic) unsigned long long funcsUserChoiceSwitch;

+ (void)initialize;

- (void)setFuncsUserChoiceSwitch:(unsigned long long)a0;
- (unsigned long long)funcsUserChoiceSwitch;
- (void)setFuncsSwitch:(unsigned long long)a0;
- (unsigned long long)funcsSwitch;

@end
