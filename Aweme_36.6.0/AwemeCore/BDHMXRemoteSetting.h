@class NSSet, NSDictionary, NSArray, NSCache;

@interface BDHMXRemoteSetting : NSObject

@property (readonly, nonatomic) NSCache *mapCache;
@property (nonatomic) BOOL enableMonitor;
@property (nonatomic) BOOL enableWeb;
@property (nonatomic) BOOL enableLynx;
@property (copy, nonatomic) NSDictionary *rawSettings;
@property (copy, nonatomic) NSDictionary *bidInfo;
@property (nonatomic) long long enableSwitch;
@property (nonatomic) long long updateTime;
@property (nonatomic) long long requestTime;
@property (nonatomic) long long duration;
@property (nonatomic) long long settingId;
@property (nonatomic) unsigned long long dataFrom;
@property (retain, nonatomic) NSSet *hostSet;
@property (retain, nonatomic) NSArray *bidRegexMapList;
@property (readonly, nonatomic) NSDictionary *allEventSample;

+ (long long)serviceTypeForName:(id)a0;
+ (id)nameTypeMap;

- (void)parseDictionary:(id)a0;
- (id)bidSettingModel:(id)a0;
- (void)fetchBidByRegexList:(id)a0 completion:(id /* block */)a1;
- (id)bidSampleInfoDict:(id)a0 level:(long long)a1;
- (id)customEventSampleInfo:(id)a0 bid:(id)a1;
- (id)bidSampleInfoDict:(id)a0;
- (void)fetchBidByRegexList:(id)a0 fullCompletion:(id /* block */)a1;
- (id)getBidFromRegexList:(id)a0;
- (void)parseBidInfoToGetRegexList;
- (id)iesDefaultSetting;
- (id)sampleBidName:(id)a0;
- (void)judgeModuleSwitchStatus;
- (BOOL)needReportWithService:(id)a0 bid:(id)a1;
- (BOOL)needReportWithServiceType:(long long)a0 bid:(id)a1;
- (BOOL)isTeaSwitchOpenForBid:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
