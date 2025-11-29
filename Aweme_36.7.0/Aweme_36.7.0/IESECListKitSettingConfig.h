@class NSNumber, NSArray, NSMutableDictionary;

@interface IESECListKitSettingConfig : NSObject

@property (retain, nonatomic) NSNumber *loadMoreRangeSize;
@property (retain, nonatomic) NSNumber *openDelayReportEvent;
@property (retain, nonatomic) NSNumber *forbidUpdateBridges;
@property (retain, nonatomic) NSNumber *bridgeEventDefaultEffectiveDuration;
@property (retain, nonatomic) NSNumber *enableSubscribeEmptyListID;
@property (retain, nonatomic) NSNumber *dynamicDataJSBUseCellControllerIndex;
@property (copy, nonatomic) NSArray *forbidStayEvent;
@property (retain, nonatomic) NSNumber *forbidPreloadMallBackground;
@property (retain, nonatomic) NSNumber *forbidChangeFPSTagWithTabId;
@property (retain, nonatomic) NSNumber *forbidFixBreakIllegalContent;
@property (retain, nonatomic) NSNumber *forbidAddGeckoOfflineVersion;
@property (retain, nonatomic) NSNumber *useCustomJSResourceProvider;
@property (retain, nonatomic) NSMutableDictionary *geckoVersionCache;

+ (id)sharedInstance;

- (unsigned long long)getGeckoVersionWithAccess:(id)a0 channel:(id)a1;
- (void).cxx_destruct;

@end
