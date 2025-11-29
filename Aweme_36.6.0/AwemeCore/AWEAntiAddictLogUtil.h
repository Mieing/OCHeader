@interface AWEAntiAddictLogUtil : NSObject

+ (BOOL)enableLog;
+ (void)logInfo:(id)a0 action:(id)a1 supplement:(id)a2 extraInfoFormat:(id)a3;
+ (void)logWarn:(id)a0 action:(id)a1 supplement:(id)a2 extraInfoFormat:(id)a3;
+ (id)p_formattedLogInClass:(Class)a0 action:(id)a1 supplement:(id)a2 extraInfo:(id)a3;
+ (void)logError:(id)a0 action:(id)a1 supplement:(id)a2 extraInfoFormat:(id)a3;

@end
