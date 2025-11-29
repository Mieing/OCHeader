@interface HMDLogWrapper : NSObject

+ (void)infoALog:(id)a0 tag:(id)a1 fileName:(id)a2 funcName:(id)a3 line:(int)a4;
+ (void)setALogWithFileName:(id)a0 funcName:(id)a1 tag:(id)a2 line:(int)a3 level:(int)a4 format:(id)a5;
+ (void)warnALog:(id)a0 tag:(id)a1 fileName:(id)a2 funcName:(id)a3 line:(int)a4;
+ (void)errorALog:(id)a0 tag:(id)a1 fileName:(id)a2 funcName:(id)a3 line:(int)a4;
+ (void)debugALog:(id)a0 tag:(id)a1 fileName:(id)a2 funcName:(id)a3 line:(int)a4;
+ (void)setALogEnabled;
+ (void)alogOpenDefault:(id)a0 namePrefix:(id)a1;
+ (void)alogOpenWithDir:(id)a0 namePrefix:(id)a1 maxSize:(id)a2 outdate:(id)a3 isCrypt:(BOOL)a4;
+ (void)alogSetConsoleLogOpen:(BOOL)a0;
+ (void)setAlogSetLogLevel:(long long)a0;
+ (void)alogFlush;
+ (void)alogFlushSync;
+ (void)alogClose;
+ (void)alogRemoveFileAt:(id)a0;
+ (void)alogSetTagBlocklist:(id)a0;
+ (id)alogGetFilPathsFrom:(id)a0 to:(id)a1;
+ (void)fatalALog:(id)a0 tag:(id)a1 fileName:(id)a2 funcName:(id)a3 line:(int)a4;
+ (id)defaultPath;

@end
