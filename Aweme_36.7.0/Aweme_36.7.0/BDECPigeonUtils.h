@interface BDECPigeonUtils : NSObject

+ (void)addEndToEndDurationParamsToMessageExt:(id)a0 pigeonClient:(id)a1;
+ (void)taskAsyncInQueue:(id)a0 name:(id)a1 block:(id /* block */)a2;
+ (id)subArrayWithArray:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (void)addEndToEndDurationParamsScene:(id)a0 time:(id)a1 toMessageExt:(id)a2 pigeonClient:(id)a3;
+ (BOOL)randomSample:(long long)a0;
+ (void)addMessageExt:(id)a0 toParams:(id)a1 limitContentLength:(unsigned long long)a2;
+ (void)taskAsyncInQueue:(id)a0 block:(id /* block */)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })validRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withArray:(id)a1;
+ (long long)currentTimestamp;

@end
