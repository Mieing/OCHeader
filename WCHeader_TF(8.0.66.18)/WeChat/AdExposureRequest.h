@class BaseRequest, NSString, AdExposureInfo, AdExposureSocialInfo, NSData, AdExposureExtInfo;

@interface AdExposureRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *viewid;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int exposureDuration;
@property (retain, nonatomic) NSString *ssid;
@property (retain, nonatomic) NSString *bssid;
@property (nonatomic) unsigned long long timestampMs;
@property (retain, nonatomic) AdExposureInfo *exposureInfo;
@property (retain, nonatomic) AdExposureSocialInfo *socialInfo;
@property (nonatomic) unsigned int adType;
@property (retain, nonatomic) NSString *descxml;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) NSString *snsStatext;
@property (nonatomic) unsigned int exposureCnt;
@property (nonatomic) unsigned long long feedDuration;
@property (nonatomic) unsigned long long feedFullDuration;
@property (nonatomic) unsigned int flipStatus;
@property (retain, nonatomic) NSData *atFriendSourceInfo;
@property (retain, nonatomic) NSData *atFriendSelfInfo;
@property (retain, nonatomic) NSString *oaid;
@property (retain, nonatomic) NSString *waid;
@property (retain, nonatomic) NSString *pkgName;
@property (nonatomic) float screenWidth;
@property (nonatomic) float screenHeight;
@property (nonatomic) float adHeight;
@property (nonatomic) unsigned int userInterfaceStyle;
@property (nonatomic) unsigned long long timerHalfDuration;
@property (nonatomic) unsigned long long timerFullDuration;
@property (nonatomic) unsigned int followStatus;
@property (nonatomic) unsigned int appInstallStatus;
@property (nonatomic) unsigned int timelineIndex;
@property (retain, nonatomic) NSString *imei;
@property (retain, nonatomic) NSString *idfa;
@property (retain, nonatomic) NSString *idfv;
@property (retain, nonatomic) NSString *ua;
@property (retain, nonatomic) NSString *commonDeviceId;
@property (nonatomic) unsigned int elderMode;
@property (nonatomic) unsigned int fontLevel;
@property (nonatomic) unsigned int relievedBuyShow;
@property (retain, nonatomic) NSString *uxinfo;
@property (nonatomic) unsigned int forbidAutoPlay;
@property (retain, nonatomic) NSString *timelineSessionId;
@property (retain, nonatomic) AdExposureExtInfo *adExtInfo;

+ (void)initialize;

@end
