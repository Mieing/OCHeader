@interface SettingUtil : NSObject

+ (id)GetLocalUsrImg;
+ (BOOL)isAffiliatedAcct;
+ (BOOL)isSnsSightInFlowControlByDailyTime;
+ (BOOL)isSnsSightInFlowControlByDatePeriod;
+ (BOOL)isSnsSightInFlowControl;
+ (BOOL)isSnsAdSightInFlowControl;
+ (BOOL)isAutoDownloadSight:(id)a0;
+ (BOOL)isAutoDownloadSightForExp:(id)a0;
+ (BOOL)isAutoDownloadAdSight:(id)a0;
+ (BOOL)isSnsAutoDownloadAdCanvasSight;
+ (BOOL)isAutoPlaySight;
+ (BOOL)isNeverAutoPlaySight;
+ (void)logNotificationSetting:(BOOL)a0;
+ (BOOL)isF2FSynthesizeSpeechOpen;
+ (unsigned long long)transferDelayType;
+ (id)delayTypeString;
+ (id)delayTypeStringWith:(unsigned long long)a0;
+ (id)getMainSetting;
+ (id)getMainSettingExt;
+ (id)getUpdateInfo;
+ (id)getLocalInfo;
+ (BOOL)isCurUsrName:(id)a0;
+ (id)getCurUsrName;
+ (id)getCurUsrNickname;
+ (id)getCurUsrDisplayName;
+ (id)getCurUsrBindMobile;
+ (id)getCurUsrBindEmail;
+ (id)getLocalUsrName:(unsigned int)a0;
+ (void)loadCurUserInfo:(id)a0;
+ (BOOL)isOpenQQ;
+ (BOOL)isBindQQ;
+ (unsigned int)getCurUserBindQQUin;
+ (BOOL)isOpenQQMail;
+ (BOOL)isOpenVoicePrint;
+ (BOOL)isPasskeyOpened;
+ (BOOL)cannotModAlias;
+ (id)getEUCountryISOCodes;
+ (id)getUserRegCountry;
+ (BOOL)isOverSeaUser;
+ (BOOL)isRegInChina;
+ (BOOL)isRegInMO;
+ (BOOL)isRegInHK;
+ (BOOL)isRegInEUCountry;
+ (id)getRegCountryCode;
+ (BOOL)isEUCountryISOCodes:(id)a0;

@end
