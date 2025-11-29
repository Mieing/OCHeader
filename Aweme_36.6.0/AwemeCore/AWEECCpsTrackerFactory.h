@interface AWEECCpsTrackerFactory : NSObject

+ (void)reportWithParams:(id)a0 fromSource:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)reportWithUrl:(id)a0 fromSource:(unsigned long long)a1;
+ (void)reportWithParams:(id)a0 fromSource:(unsigned long long)a1;
+ (BOOL)useOldWay;
+ (BOOL)useNewWay;
+ (void)reportWithUrl:(id)a0;
+ (void)reportWithParams:(id)a0;

@end
