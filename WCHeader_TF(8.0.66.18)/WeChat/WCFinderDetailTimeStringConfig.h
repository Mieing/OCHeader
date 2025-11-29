@class NSString;

@interface WCFinderDetailTimeStringConfig : NSObject

@property (nonatomic) BOOL showDetailTime;
@property (retain, nonatomic) NSString *beforeOneMinText;
@property (retain, nonatomic) NSString *beforeMinFormatText;
@property (retain, nonatomic) NSString *beforeHourFormatText;
@property (retain, nonatomic) NSString *yesterdayText;
@property (retain, nonatomic) NSString *beforeDayFormatText;
@property (retain, nonatomic) NSString *beforeWeekFormatText;
@property (retain, nonatomic) NSString *beforeMonthFormatText;
@property (retain, nonatomic) NSString *overOneYearFormatText;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
