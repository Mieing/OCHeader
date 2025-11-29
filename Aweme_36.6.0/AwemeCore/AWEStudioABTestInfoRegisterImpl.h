@class NSString;

@interface AWEStudioABTestInfoRegisterImpl : NSObject <AWEStudioABTestInfoRegisterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awe_registerBoolABTestCaseWithPropertyName:(id)a0 serverString:(id)a1 defaultValue:(BOOL)a2 title:(id)a3;
- (void)awe_registerNumberABTestCaseWithPropertyName:(id)a0 serverString:(id)a1 defaultValue:(id)a2 title:(id)a3;
- (void)awe_registerStringABTestCaseWithPropertyName:(id)a0 serverString:(id)a1 defaultValue:(id)a2;

@end
