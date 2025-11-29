@class NSArray, NSDate;

@interface AWEPostPageScheduleData : NSObject

@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSArray *hours;
@property (copy, nonatomic) NSArray *minutes;
@property (nonatomic) long long year;
@property (nonatomic) long long month;
@property (nonatomic) long long day;
@property (nonatomic) long long limitHour;
@property (nonatomic) long long limitMinute;

+ (id)createWithDate:(id)a0 calendar:(id)a1;

- (void).cxx_destruct;

@end
