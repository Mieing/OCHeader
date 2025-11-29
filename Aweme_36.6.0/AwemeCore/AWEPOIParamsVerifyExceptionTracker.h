@interface AWEPOIParamsVerifyExceptionTracker : NSObject

+ (void)trackWithEvent:(id)a0 params:(id)a1 exceptionType:(long long)a2 exceptionMessage:(id)a3 owner:(id)a4 skippedDepth:(unsigned long long)a5 extraCustomParams:(id)a6 inDebugEnv:(BOOL)a7;

@end
