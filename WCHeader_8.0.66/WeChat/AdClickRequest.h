@class BaseRequest, NSString, AdShareInfo, NSData, AdClickQualityInfo;

@interface AdClickRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *viewid;
@property (nonatomic) int clickpos;
@property (retain, nonatomic) NSString *descxml;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *ssid;
@property (retain, nonatomic) NSString *bssid;
@property (nonatomic) unsigned long long timestampMs;
@property (retain, nonatomic) AdShareInfo *shareInfo;
@property (nonatomic) unsigned int adType;
@property (nonatomic) unsigned int clickAction;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) NSString *snsStatext;
@property (nonatomic) unsigned int flipStatus;
@property (retain, nonatomic) NSData *atFriendSourceInfo;
@property (retain, nonatomic) NSData *atFriendSelfInfo;
@property (nonatomic) unsigned long long exposureStartTime;
@property (retain, nonatomic) NSString *oaid;
@property (retain, nonatomic) NSString *waid;
@property (retain, nonatomic) NSString *pkgName;
@property (nonatomic) unsigned int videoPlayTime;
@property (nonatomic) unsigned int followStatus;
@property (nonatomic) unsigned int appInstallStatus;
@property (retain, nonatomic) NSString *imei;
@property (retain, nonatomic) NSString *idfa;
@property (retain, nonatomic) NSString *idfv;
@property (retain, nonatomic) NSString *ua;
@property (retain, nonatomic) NSString *commonDeviceId;
@property (nonatomic) int subClickpos;
@property (nonatomic) unsigned int elderMode;
@property (nonatomic) unsigned int fontLevel;
@property (nonatomic) unsigned int relievedBuyShow;
@property (retain, nonatomic) NSString *uxinfo;
@property (retain, nonatomic) NSString *minishopUuid;
@property (nonatomic) unsigned int forbidAutoPlay;
@property (retain, nonatomic) NSString *timelineSessionId;
@property (retain, nonatomic) AdClickQualityInfo *clickQualityInfo;

+ (void)initialize;

@end
