@interface WCPayF2FUtil : NSObject

+ (unsigned long long)getTimeFormatFromSvrRetType:(unsigned long long)a0;
+ (id)getDateDisplayContentWithTimestamp:(unsigned long long)a0 timeFormat:(unsigned long long)a1;
+ (id)getDateAndTimeDisplayContentWithTimestamp:(unsigned long long)a0;
+ (id)dateYearOnlyFormat:(id)a0;
+ (id)dateYearAndMonthFormat:(id)a0;
+ (id)dateYearAndMonthAndDayFormat:(id)a0;
+ (void)reportFacingReceiveIDKeyWithKeyValue:(unsigned int)a0;

@end
