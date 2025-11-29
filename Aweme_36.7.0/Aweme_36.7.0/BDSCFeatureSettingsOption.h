@class NSArray, NSMutableDictionary;

@interface BDSCFeatureSettingsOption : NSObject

@property (retain, nonatomic) NSMutableDictionary *sceneConfigDict;
@property (nonatomic) BOOL allowAlogFeature;
@property (nonatomic) BOOL banHiSmartToXsg;
@property (nonatomic) BOOL banDangBeiToXsg;
@property (nonatomic) BOOL banTCLToXsg;
@property (nonatomic) BOOL banCHSmartXsg;
@property (nonatomic) unsigned long long searchType;
@property (copy, nonatomic) NSArray *protocolOrderedArray;
@property (nonatomic) BOOL alwaysSaveDefaultClarity;
@property (nonatomic) unsigned long long cloudSearchType;
@property (nonatomic) double cloudPlayTimeoutLimit;
@property (nonatomic) long long cloudPlayRetryCount;
@property (readonly, nonatomic) BOOL enableScreenCastCloud;
@property (nonatomic) double tclScanDuration;
@property (nonatomic) BOOL banMergeToXsgDevice;
@property (nonatomic) BOOL enableBleSearch;
@property (nonatomic) BOOL messageServerRunInBackground;
@property (nonatomic) BOOL enableCast4KToXsgLeBoPlayer;
@property (nonatomic) BOOL enableXsgMediaPreload;
@property (nonatomic) long long xsgMediaPreloadMaxCount;
@property (nonatomic) BOOL enableReportWifiInfo;
@property (nonatomic) BOOL enableNetworkEnvCheck;
@property (copy, nonatomic) NSArray *hlsFirstList;
@property (copy, nonatomic) NSArray *claritySequence;
@property (copy, nonatomic) NSArray *limitedClarities;
@property (copy, nonatomic) NSArray *supportPlayProtocolStrategies;
@property (nonatomic) BOOL shouldAppendPlayInfoParams;
@property (nonatomic) BOOL enableCDNResource;
@property (nonatomic) BOOL connectUseNetwork;
@property (nonatomic) double connectTimeoutLimit;
@property (nonatomic) long long connectRetryCount;
@property (nonatomic) double triggerSearchDiagnosisTime;
@property (nonatomic) BOOL fixShowSearchViewMultipleCrash;
@property (nonatomic) BOOL enableTraceVideoURLRequest;
@property (nonatomic) BOOL dlnaCustomizedEnable;
@property (nonatomic) BOOL enableCallbackCompleteOnStop;
@property (nonatomic) BOOL useCustomNoDeviceBanners;
@property (nonatomic) BOOL enableAutoRestartHttpServer;
@property (nonatomic) BOOL enableCheckPushNetwork;
@property (nonatomic) unsigned long long maxRedirectConcurrentCount;
@property (nonatomic) BOOL useMutiThreadForNetService;
@property (nonatomic) long long bdleFeatureConfig;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)modelWithDictionary:(id)a0;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (id)sceneConfigForSceneID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
