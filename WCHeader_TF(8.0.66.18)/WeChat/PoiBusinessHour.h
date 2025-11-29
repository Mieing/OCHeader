@class NSString, NSMutableArray;

@interface PoiBusinessHour : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *hour;
@property (retain, nonatomic) NSMutableArray *times;
@property (retain, nonatomic) NSMutableArray *formatOpenTimes;
@property (retain, nonatomic) NSMutableArray *formatCloseTimes;

+ (void)initialize;

@end
