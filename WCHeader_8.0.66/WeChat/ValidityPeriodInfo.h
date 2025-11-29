@class NSString;

@interface ValidityPeriodInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int startTime;
@property (nonatomic) unsigned int endTime;
@property (retain, nonatomic) NSString *msg;

+ (void)initialize;

@end
