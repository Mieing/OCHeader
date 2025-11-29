@class BaseResponse;

@interface GetTimelineSettingResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL personalizedRecommendSetting;
@property (nonatomic) unsigned int useruin;
@property (nonatomic) BOOL showUserHeadForPay;
@property (nonatomic) unsigned int appmsgReadRecordSetting;
@property (nonatomic) unsigned int creationCenterNotify;
@property (nonatomic) unsigned int finderRecommendSetting;

+ (void)initialize;

@end
