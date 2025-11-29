@class NSSet;

@interface BDEntryVerifyCondition : BDCertCondition

@property (copy, nonatomic) NSSet *allowList;

- (void)parseParams:(id)a0;
- (id)validateCertUnit:(id)a0;
- (id)extractConfigParams;
- (id)methodNameWithCertUnit:(id)a0;
- (void).cxx_destruct;
- (id)error;

@end
