@class NSString, NSDictionary, NSMutableDictionary;

@interface MSConfigML : NSObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *fetchedID;
@property (copy, nonatomic) NSString *installID;
@property (copy, nonatomic) NSString *afdi;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSDictionary *customInfo;
@property (retain, nonatomic) NSMutableDictionary *advanceInfo;
@property (nonatomic) long long clientType;
@property (nonatomic) long long ovRegionType;
@property (copy, nonatomic) NSString *subAppID;
@property (copy, nonatomic) NSString *BDDeviceID;
@property (copy, nonatomic) NSString *sdkID;
@property (copy, nonatomic) NSString *licenseStr;
@property (copy, nonatomic) NSString *customHost;
@property (nonatomic) long long mode;
@property (copy, nonatomic) id /* block */ didFetchBlock;
@property (copy, nonatomic) id /* block */ settingConfigBlock;
@property (copy, nonatomic) id /* block */ fetchSettingByKeyBlock;
@property (copy, nonatomic) id /* block */ checkSettingUpdatedBlock;
@property (copy, nonatomic) id /* block */ alogProxy;

- (id)initWithSDKID:(id)a0 SubAppID:(id)a1 License:(id)a2;
- (id /* block */)setIDFA;
- (id /* block */)setOvRegionType;
- (id)initWithAppID:(id)a0 License:(id)a1;
- (id)initWithSDKID:(id)a0 SubAppID:(id)a1 License:(id)a2 Mode:(long long)a3;
- (id /* block */)setBDDeviceID;
- (id /* block */)setCustomInfo;
- (id /* block */)setDefaultReportHost;
- (id /* block */)setDidFetchBlock;
- (BOOL)isSDK;
- (id)initWithAppID:(id)a0 License:(id)a1 Mode:(long long)a2;
- (id /* block */)addAdvanceInfo;
- (id /* block */)setClientType;
- (id /* block */)setDeviceID;
- (id /* block */)setInstallID;
- (id /* block */)setSessionID;
- (id /* block */)setChannel;
- (id /* block */)setSettingConfigBlock;
- (id /* block */)setFetchDeviceIdBlock;
- (id /* block */)setFetchSettingByKeyBlock;
- (id /* block */)setCheckSettingUpdatedBlock;
- (id /* block */)setALogProxy;
- (id /* block */)setMode;
- (void).cxx_destruct;

@end
