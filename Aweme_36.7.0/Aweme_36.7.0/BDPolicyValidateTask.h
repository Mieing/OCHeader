@class BDCertUnit;

@interface BDPolicyValidateTask : NSObject

@property (retain, nonatomic) BDCertUnit *certUnit;

- (unsigned long long)errorLevelOfCertUnit:(id)a0 withResult:(id)a1 inUnit:(id)a2;
- (void)sendErrorEventWithCertUnit:(id)a0 error:(id)a1 errorLevel:(unsigned long long)a2;
- (void)updateValidateResult:(id)a0 withStrategyUnitResult:(id)a1 errorLevel:(unsigned long long)a2;
- (void)sendEvent:(id)a0 startTime:(double)a1 error:(id)a2 errorLevel:(unsigned long long)a3 extraInfo:(id)a4;
- (unsigned long long)shouldHandleError:(id)a0 forCert:(id)a1 inUnit:(Class)a2;
- (void).cxx_destruct;
- (id)validate;
- (id)eventWithType:(id)a0;

@end
