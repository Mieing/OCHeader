@interface BDSimLogger : NSObject

+ (void)setLogFlag:(long long)a0;
+ (BOOL)getLogEnable;
+ (long long)getLogFlag;
+ (void)setCustomLogger:(id)a0;
+ (void)setLogEnable:(BOOL)a0;

@end
