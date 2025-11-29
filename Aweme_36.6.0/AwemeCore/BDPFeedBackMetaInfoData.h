@class NSString, NSDictionary, BDPUniqueID, NSNumber;

@interface BDPFeedBackMetaInfoData : NSObject

@property (copy, nonatomic) NSDictionary *allMetaInfoDict;
@property (copy, nonatomic) NSDictionary *extraParamDict;
@property (copy, nonatomic) NSDictionary *settingsMetaInfoDict;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) unsigned long long reportType;
@property (nonatomic) long long mpTypeCurrent;
@property (nonatomic) long long sourceCurrent;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *reportFrom;
@property (retain, nonatomic) NSNumber *source;
@property (retain, nonatomic) NSNumber *mpType;
@property (copy, nonatomic) NSString *appKey;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *OSVersion;
@property (copy, nonatomic) NSString *deviceType;
@property (copy, nonatomic) NSString *updateVersionCode;
@property (copy, nonatomic) NSString *hostLoginCookie;
@property (copy, nonatomic) NSString *iid;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *mpVersionType;
@property (copy, nonatomic) NSString *mpId;
@property (copy, nonatomic) NSString *mpName;
@property (copy, nonatomic) NSString *mpPath;
@property (copy, nonatomic) NSString *mpQuery;
@property (copy, nonatomic) NSString *openId;
@property (copy, nonatomic) NSString *nativeSdkVersion;
@property (copy, nonatomic) NSString *networkType;
@property (copy, nonatomic) NSString *pathSchema;
@property (copy, nonatomic) NSString *libVersion;
@property (copy, nonatomic) NSString *os;

- (id)getReportMetaInfoData;
- (void)getUserPluginData;
- (void)getApplicationPluginData;
- (id)getReportMetaInfoDataWithParam:(id)a0;
- (id)getSettingsMetaInfoData;
- (void)getMpPath;
- (void)getBundleData;
- (void)getCommonData;
- (void)getNetworkData;
- (void)getVersionData;
- (void)getFeedBackTypeData;
- (void)getInnerCommonData;
- (id)initWithUniqueID:(id)a0 reportType:(unsigned long long)a1;
- (void)getReportParamsWithCallback:(id /* block */)a0 withExtraParam:(id)a1;
- (void).cxx_destruct;
- (void)getDeviceData;

@end
