@interface AWESearchScanInnerEntranceShowManager : NSObject

+ (BOOL)isTeenModeEnabled;
+ (BOOL)isBasicModeEnabled;
+ (id)syncGetInnerCameraDetailPageSearchBarConfig;
+ (id)syncGetInnerScanDetailPageSearchBarConfig;
+ (id)syncGetInnerImageDetailPageSearchBarConfig;
+ (BOOL)syncGetInnerScanEntranceClearExit;
+ (BOOL)isEntranceExp;
+ (id)scanEntranceShouldShow:(id)a0 extra:(id)a1;
+ (BOOL)referShield:(id)a0;
+ (id)getGuideFreqConfigModel:(id)a0;
+ (void)trackShowSearchIconFail:(id)a0;
+ (void)recordEntranceShow:(id)a0;
+ (void)trackShowSearchIcon:(id)a0;
+ (void)recordEntranceClick:(id)a0;
+ (void)trackClickSearchIcon:(id)a0;
+ (BOOL)isRichMaxShow:(id)a0;
+ (void)recordTypeShowInfo:(id)a0;
+ (id)getSearchScanEntryConfig:(id)a0 extra:(id)a1;
+ (BOOL)isEcomIntent:(id)a0 config:(id)a1;
+ (BOOL)needShow:(id)a0;
+ (BOOL)shouldShield:(id)a0 extra:(id)a1;
+ (id)downGradeScanForEcomIntentOrShieldInfo:(id)a0;
+ (id)setEntranceModel:(id)a0 type:(unsigned long long)a1;
+ (id)downGradeCameraForSensitiveInfo:(id)a0;
+ (id)getStorageData;
+ (id)initializeFirstShowStorageModelData:(double)a0;
+ (void)saveStorageData:(id)a0;
+ (id)initialzeNewDayShowModelData:(double)a0 showTimes:(long long)a1 clickTimes:(long long)a2;
+ (double)getDayDiff:(double)a0 now:(double)a1;
+ (id)getFreqConfigModel:(id)a0;
+ (id)initializeFirstClickStorageModelData:(double)a0;
+ (long long)getEntranceShowTimes:(id)a0;
+ (void)saveForeverShieldTarget:(id)a0;
+ (void)resetStorageData;
+ (id)shareInstance;

@end
