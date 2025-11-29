@interface AidManager : NSObject

+ (BOOL)isUpToDate:(double)a0 diffDay:(long long)a1;
+ (id)instance;
+ (void)initialize;

- (id)value:(id)a0 token:(id)a1 utdid:(id)a2;
- (void)requestAid:(id)a0 token:(id)a1 utdid:(id)a2 aidDelegate:(id)a3;

@end
