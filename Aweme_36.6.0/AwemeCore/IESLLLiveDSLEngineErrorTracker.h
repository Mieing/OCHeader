@interface IESLLLiveDSLEngineErrorTracker : NSObject

+ (void)trackExpoundCardDSLErrorWithCode:(long long)a0 message:(id)a1 extraParams:(id)a2;
+ (void)trackEvent:(id)a0 withCode:(long long)a1 message:(id)a2 extraParams:(id)a3;
+ (void)trackShelfDSLErrorWithCode:(long long)a0 message:(id)a1 extraParams:(id)a2;
+ (void)trackDSLEngineErrorWithCode:(long long)a0 message:(id)a1 extraParams:(id)a2;
+ (void)trackDSLEngineProcessDuration:(id)a0;

@end
