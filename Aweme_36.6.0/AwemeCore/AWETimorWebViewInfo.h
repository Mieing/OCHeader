@class NSString;

@interface AWETimorWebViewInfo : NSObject

@property (copy, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *appKey;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *OSVersion;
@property (copy, nonatomic) NSString *deviceType;
@property (copy, nonatomic) NSString *updateVersionCode;
@property (copy, nonatomic) NSString *hostLoginCookie;
@property (copy, nonatomic) NSString *iid;
@property (copy, nonatomic) NSString *mpId;
@property (copy, nonatomic) NSString *openId;
@property (copy, nonatomic) NSString *nativeSdkVersion;
@property (copy, nonatomic) NSString *networkType;
@property (copy, nonatomic) NSString *os;
@property (copy, nonatomic) NSString *groupID;

- (id)initWithAppID:(id)a0 groupID:(id)a1 URLString:(id)a2;
- (void)getInfoWithExtraParam:(id)a0 callBack:(id /* block */)a1;
- (id)getSettingsInfo;
- (id)getReportMetaInfoData;
- (void)getUserPluginData;
- (void)getApplicationPluginData;
- (id)getReportMetaInfoDataWithParam:(id)a0;
- (void).cxx_destruct;
- (void)getData;

@end
