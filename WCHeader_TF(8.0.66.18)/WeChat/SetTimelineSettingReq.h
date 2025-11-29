@class BaseRequest;

@interface SetTimelineSettingReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) BOOL personalizedRecommendSetting;
@property (nonatomic) BOOL showUserHeadForPay;
@property (nonatomic) unsigned int appmsgReadRecordSetting;
@property (nonatomic) unsigned int creationCenterNotify;
@property (nonatomic) unsigned int finderRecommendSetting;

+ (void)initialize;

@end
