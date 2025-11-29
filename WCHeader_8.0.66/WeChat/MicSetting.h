@class NSString, MicSetting_PurchaseMicSetting;

@interface MicSetting : WXPBGeneratedMessage

@property (nonatomic) unsigned long long settingFlag;
@property (nonatomic) unsigned long long settingSwitchFlag;
@property (retain, nonatomic) NSString *adjustLayoutTopMicSdkUserId;
@property (retain, nonatomic) MicSetting_PurchaseMicSetting *purchaseMicSetting;
@property (nonatomic) BOOL highlightMicPerson;
@property (nonatomic) unsigned long long pkSettingFlag;

+ (void)initialize;

- (void)setPkSettingFlag:(unsigned long long)a0;
- (unsigned long long)pkSettingFlag;
- (void)setHighlightMicPerson:(BOOL)a0;
- (BOOL)highlightMicPerson;
- (void)setPurchaseMicSetting:(id)a0;
- (id)purchaseMicSetting;
- (void)setAdjustLayoutTopMicSdkUserId:(id)a0;
- (id)adjustLayoutTopMicSdkUserId;
- (void)setSettingSwitchFlag:(unsigned long long)a0;
- (unsigned long long)settingSwitchFlag;
- (void)setSettingFlag:(unsigned long long)a0;
- (unsigned long long)settingFlag;

@end
