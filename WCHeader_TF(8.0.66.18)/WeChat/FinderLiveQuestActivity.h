@class NSString;

@interface FinderLiveQuestActivity : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *activityId;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *wording;
@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSString *actionUrl;
@property (nonatomic) unsigned int remainClickTimes;
@property (nonatomic) unsigned int activitySwitchDisplayInterval;
@property (nonatomic) unsigned int reportNewCgi;

+ (void)initialize;

@end
