@interface AWELogAlt : NSObject

+ (void)logInfoFormat:(id)a0;
+ (void)logInfoFormatForbid:(id)a0;
+ (void)logWarnFormat:(id)a0;
+ (void)logErrorFormat:(id)a0;
+ (void)writeSessionLog:(int)a0 format:(id)a1;
+ (void)logInfo:(id)a0;
+ (void)logError:(id)a0;
+ (void)logWarn:(id)a0;

@end
