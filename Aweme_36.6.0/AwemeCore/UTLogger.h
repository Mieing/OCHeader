@interface UTLogger : NSObject

+ (void)e:(int)a0 tag:(id)a1 with:(id)a2;
+ (id)logLevelString:(int)a0;
+ (void)printLog:(int)a0 level:(int)a1 tag:(id)a2 with:(id)a3 and:(char *)a4;
+ (BOOL)isDev;
+ (void)v:(int)a0 tag:(id)a1 with:(id)a2;
+ (void)d:(int)a0 tag:(id)a1 with:(id)a2;
+ (void)i:(int)a0 tag:(id)a1 with:(id)a2;
+ (void)w:(int)a0 tag:(id)a1 with:(id)a2;
+ (void)setDebug:(BOOL)a0;
+ (BOOL)isDebug;
+ (void)setDev:(BOOL)a0;

@end
