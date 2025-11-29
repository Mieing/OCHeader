@interface AWEDeliveryDateUtil : NSObject

+ (long long)awed_getDurationStartTime:(double)a0 endTime:(double)a1;
+ (double)awed_currentTimestamp;
+ (id)awed_accurateDate;
+ (BOOL)awed_isSameYear:(long long)a0 Time2:(long long)a1;
+ (BOOL)awed_isSameDay:(long long)a0 Time2:(long long)a1;
+ (double)standardTimestamp:(id)a0;
+ (BOOL)awed_isSameMonth:(long long)a0 Time2:(long long)a1;
+ (id)awed_dateStringWithFormat:(id)a0 date:(id)a1;

@end
