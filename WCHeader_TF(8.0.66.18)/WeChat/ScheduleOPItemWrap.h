@class NSString, ScheduleOPWrap;

@interface ScheduleOPItemWrap : NSObject <NSCopying>

@property (retain, nonatomic) NSString *word;
@property (retain, nonatomic) ScheduleOPWrap *scheduleOpWrap;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
