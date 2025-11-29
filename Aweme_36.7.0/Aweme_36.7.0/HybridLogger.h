@interface HybridLogger : NSObject

+ (void)logWithTag:(id)a0 level:(long long)a1 format:(id)a2;
+ (id)sharedLoagger;

- (void)logWithTag:(id)a0 level:(long long)a1 message:(id)a2;
- (void)logWithTag:(id)a0 level:(long long)a1 str:(id)a2;

@end
