@class NSString;

@interface NewLifeReportAction : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *action;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long upTime;
@property (nonatomic) unsigned long long timeFromFirstAction;
@property (nonatomic) unsigned long long timeFromPreAction;

+ (void)initialize;

@end
