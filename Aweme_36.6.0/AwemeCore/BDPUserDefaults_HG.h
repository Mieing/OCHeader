@class BDPMMKVStorage, NSString, NSDictionary, NSUserDefaults;

@interface BDPUserDefaults_HG : NSObject

@property (retain, nonatomic) NSUserDefaults *hgUserDefaults;
@property (retain, nonatomic) BDPMMKVStorage *hgMMKVStorage;
@property (retain, nonatomic) NSDictionary *usersAuthenticationStatus;
@property (nonatomic) long long exitPopupRecordCount;
@property (nonatomic) double lastExitPopupTime;
@property (retain, nonatomic) NSDictionary *exitpopupNewuserList;
@property (nonatomic) long long exitpopupNewuserListIsNew;
@property (retain, nonatomic) NSDictionary *exitpopupNewuserTimeTable;
@property (retain, nonatomic) NSDictionary *gridGameFrequencyControlDic;
@property (retain, nonatomic) NSString *i18nVersion;
@property (retain, nonatomic) NSDictionary *settingsManagerSettings;
@property (retain, nonatomic) NSString *settingsManagerCtxInfos;
@property (nonatomic) long long settingsManagerSettingsTime;
@property (retain, nonatomic) NSString *updatedJSLibFilePath;
@property (retain, nonatomic) NSDictionary *sdkProtection;
@property (nonatomic) double revisitEducationLastShowTime;
@property (nonatomic) long long revisitEducationRecordCount;
@property (retain, nonatomic) NSDictionary *exitPopupSubscribeInfo;
@property (retain, nonatomic) NSDictionary *hostUserDefaults;
@property (retain, nonatomic) NSDictionary *hostDeveloperInfo;
@property (nonatomic) BOOL isRankListRemindHasShown;
@property (nonatomic) long long lastRevisitNoRemindTime;
@property (retain, nonatomic) NSDictionary *reddotInfos;
@property (copy, nonatomic) NSDictionary *floatingBallControl;
@property (copy, nonatomic) NSDictionary *goLiveDate;

+ (id)sharedInstance;

- (void)setAddDesktopGuideViewInfo:(id)a0 withKey:(id)a1;
- (id)addDesktopGuideViewInfoWithKey:(id)a0;
- (id)announcementInfoWithKey:(id)a0;
- (void)setAnnouncementInfo:(id)a0 withKey:(id)a1;
- (double)getLastGrowthCenterCapsuleEntranceShowTime:(id)a0;
- (void)updateGrowthCenterCapsuleEntrance:(id)a0 showTime:(double)a1;
- (id)getGrowthCenterCapsuleEntranceShowTimeKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
