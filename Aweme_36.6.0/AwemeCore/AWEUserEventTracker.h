@interface AWEUserEventTracker : NSObject

+ (void)trackWithInfo:(id)a0;
+ (void)trackWithLabel:(id)a0;
+ (void)trackCarrierMaskTokenUseForceScene:(long long)a0;
+ (id)platformString:(unsigned long long)a0;
+ (void)trackWithEventName:(id)a0 withParams:(id)a1 needStagingFlag:(BOOL)a2;
+ (void)sloLoginMonitorWithEventName:(id)a0 params:(id)a1 error:(id)a2;

@end
