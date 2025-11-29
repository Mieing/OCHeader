@interface AWEDateTime : NSObject

+ (id)simpleDateStringSince:(double)a0;
+ (id)onlyDateStringSince:(double)a0;
+ (id)customtimeStringSince1970:(double)a0 formateType:(int)a1;
+ (id)customtimeStringSince1970:(double)a0 formateType:(int)a1 showType:(int)a2;
+ (id)customtimeStringSince1970:(double)a0 midnightInterval:(double)a1 formateType:(int)a2 showType:(int)a3;
+ (id)customtimeStringSince1970:(double)a0 midnightInterval:(double)a1 formateType:(int)a2;
+ (id)formateDateStringSince:(double)a0 formaterType:(int)a1;
+ (id)dateStringSince:(double)a0;
+ (id)noTimeStringSince:(double)a0;
+ (id)noDateStringSince:(double)a0;
+ (long long)daysFromDate:(id)a0 toDateTime:(id)a1;
+ (id)noTimeStringSince1970:(double)a0;
+ (id)customtimeStringSince1970:(double)a0;
+ (id)customtimeStringSince1970:(double)a0 showType:(int)a1;
+ (id)customtimeStringSince1970:(double)a0 midnightInterval:(double)a1;
+ (void)initialize;
+ (long long)daysBetweenDate:(id)a0 andDate:(id)a1;

@end
