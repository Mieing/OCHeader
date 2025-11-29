@interface AWEECOMIMDateUtil : NSObject

+ (long long)ecomim_getDurationStartTime:(double)a0 endTime:(double)a1;
+ (double)ecomim_currentTimestamp;
+ (BOOL)ecomim_isSameDay:(long long)a0 Time2:(long long)a1;
+ (BOOL)ecomim_isSameYear:(long long)a0 Time2:(long long)a1;

@end
