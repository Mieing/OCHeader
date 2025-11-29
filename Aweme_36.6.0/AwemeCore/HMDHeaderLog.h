@interface HMDHeaderLog : NSObject

+ (id)hmdWatchDogHeaderLogString;
+ (id)hmdANRHeaderLogString;
+ (id)hmdOOMHeaderLogString;
+ (id)hmdCrashHeaderLogString;
+ (id)hmdExceptionHeaderLogString;
+ (id)hmdExceptionProtectHeaderLogString;
+ (id)hmdUserHeaderLogString;
+ (id)hmdExceptionFDHeaderLogString;
+ (id)hmdBizHeaderLogString;
+ (id)hmdHeaderLogString;
+ (id)hmdHeaderLogString:(unsigned long long)a0;

@end
