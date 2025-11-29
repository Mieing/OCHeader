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

- (void)setFinderRecommendSetting:(unsigned int)a0;
- (unsigned int)finderRecommendSetting;
- (void)setCreationCenterNotify:(unsigned int)a0;
- (unsigned int)creationCenterNotify;
- (void)setAppmsgReadRecordSetting:(unsigned int)a0;
- (unsigned int)appmsgReadRecordSetting;
- (void)setShowUserHeadForPay:(BOOL)a0;
- (BOOL)showUserHeadForPay;
- (void)setUseruin:(unsigned int)a0;
- (unsigned int)useruin;
- (void)setPersonalizedRecommendSetting:(BOOL)a0;
- (BOOL)personalizedRecommendSetting;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
