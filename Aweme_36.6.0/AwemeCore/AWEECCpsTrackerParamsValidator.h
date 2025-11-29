@interface AWEECCpsTrackerParamsValidator : NSObject

- (BOOL)performSelectorWithType:(id)a0 objects:(id)a1;
- (BOOL)checkParamWithRegex:(id)a0 value:(id)a1;
- (BOOL)checkParamWithLength:(id)a0 value:(id)a1;
- (BOOL)checkParamWithEnum:(id)a0 value:(id)a1;
- (BOOL)checkParamWithNonull:(id)a0 value:(id)a1;
- (BOOL)validateValue:(id)a0 config:(id)a1;
- (SEL)selectorForType:(id)a0;

@end
