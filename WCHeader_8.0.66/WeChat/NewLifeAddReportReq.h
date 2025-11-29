@class NSString;

@interface NewLifeAddReportReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int cacheType;
@property (retain, nonatomic) NSString *action;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long upTime;

+ (void)initialize;

@end
