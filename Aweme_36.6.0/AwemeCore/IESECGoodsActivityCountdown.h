@class NSString;

@interface IESECGoodsActivityCountdown : NSObject

@property (copy, nonatomic) NSString *day;
@property (copy, nonatomic) NSString *hour;
@property (copy, nonatomic) NSString *minute;
@property (copy, nonatomic) NSString *second;
@property (copy, nonatomic) NSString *decisec;
@property (nonatomic) double currentTime;
@property (nonatomic) long long prefixSize;
@property (nonatomic) long long timerSize;

- (BOOL)LessThanOneDay;
- (id)currentCountdownStringWithHighPrecision:(BOOL)a0;
- (id)currentCountdownStringWithoutHour;
- (void).cxx_destruct;

@end
