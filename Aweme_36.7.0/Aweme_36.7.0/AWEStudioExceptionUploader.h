@interface AWEStudioExceptionUploader : NSObject

+ (BOOL)isExceptionTrackingEnabledForType:(id)a0;
+ (void)uploadUserExceptionWithoutStackTraceWithType:(id)a0 title:(id)a1 subtitle:(id)a2 params:(id)a3 filters:(id)a4 completion:(id /* block */)a5;
+ (void)uploadAllThreadExceptionWithStackTraceForType:(id)a0 params:(id)a1 filters:(id)a2 completion:(id /* block */)a3;

@end
