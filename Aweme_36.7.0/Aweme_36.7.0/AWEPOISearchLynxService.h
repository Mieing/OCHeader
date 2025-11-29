@class NSMutableDictionary, NSString, AWEPOISearchLynxModel, NSMapTable, CLLocation, NSLock, NSMutableArray;

@interface AWEPOISearchLynxService : NSObject <AWEPOISearchLynxServiceProtocol>

@property (nonatomic) BOOL isEnabledPrefetch;
@property (nonatomic) BOOL isPrefetchDataReady;
@property (nonatomic) BOOL isLynxPoiListPageReady;
@property (copy, nonatomic) NSString *prefetchJson;
@property (retain, nonatomic) CLLocation *currentLocationInfo;
@property (copy, nonatomic) AWEPOISearchLynxModel *model;
@property (copy, nonatomic) id /* block */ poiCallback;
@property (copy, nonatomic) id /* block */ lynxCompletion;
@property (copy, nonatomic) id /* block */ userTypeChangedCallback;
@property (copy, nonatomic) id /* block */ titleChangeCallBack;
@property (copy, nonatomic) id /* block */ updatePublishTrackParams;
@property (retain, nonatomic) NSMapTable *subscriberDict;
@property (retain, nonatomic) NSLock *subscriberLock;
@property (copy, nonatomic) NSString *traceSessionIdStr;
@property (retain, nonatomic) NSMutableArray *injectPrefetchSetting;
@property (retain, nonatomic) NSMutableArray *injectGlobalPropsSetting;
@property (retain, nonatomic) NSMutableDictionary *paramPool;
@property (copy, nonatomic) id /* block */ companyCouponCallback;
@property (nonatomic) BOOL shouldShowCompanyCoupon;
@property (copy, nonatomic) NSString *spuTabSchema;
@property (retain, nonatomic) NSMutableDictionary *publishAnchorInfoMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)unregisterBDXSubscriber;
- (void)subscribeBDXWithEventName:(id)a0 callback:(id /* block */)a1;
- (void)initializeSelectPOICallback:(id /* block */)a0;
- (void)p_showPOILocationPicker;
- (void)showLocationPickerWithModel:(id)a0 lynxCompletion:(id /* block */)a1;
- (void)subscriberBDXEvent;
- (id)base64StringWithString:(id)a0;
- (void)initiateLynxParameter;
- (void)p_initParamPool;
- (void)showSearchLocationViewControllerIfNeeded;
- (id)p_createSessionInfo;
- (id)locationLatiAndLodeInfoString;
- (void)p_injectParamPool;
- (void)p_prefetchParamsWithLade:(id)a0 lode:(id)a1;
- (id)p_globalPropsValueWithSessionId:(id)a0 lade:(id)a1 lode:(id)a2 containerId:(id)a3 isMutiPage:(BOOL)a4;
- (id)prefetchParamsWithGlobalProps:(id)a0;
- (BOOL)showMultiLynxCardPicker;
- (void)p_showMultiLynxCardPicker:(id /* block */)a0;
- (void)p_showLynxLocationPicker;
- (void)buildLynxParameterToDict:(id)a0 injectTarget:(long long)a1;
- (void)prefetchLynxPOIDataWithParams:(id)a0;
- (long long)defaultPoiModeWithIsMutiPage:(BOOL)a0;
- (void)insertPublishParameterToDict:(id)a0;
- (void)resetPrefetchTags;
- (void)updateCurrentAnchorInfo:(id)a0 isPOIorProduct:(BOOL)a1 awemeCreateID:(id)a2;
- (id)mergeAnchorContent:(id)a0 withDefault:(id)a1;
- (void)p_getCurrentLocationAndJumpToLocationPicker;
- (void)trackLocationPermissionAlertClick:(id)a0;
- (void)trackLocationPermissionAlertShow;
- (void)trackFetchLocationFinishWithSuccess:(BOOL)a0 permission:(unsigned long long)a1 error:(id)a2;
- (void)requestCurrentLocationInfo:(id /* block */)a0 callback:(id /* block */)a1;
- (id)p_parseInjectParamsJsonArray;
- (void)p_constructLynxParameterToDict:(id)a0 key:(id)a1 localKey:(id)a2 value:(id)a3 isStatic:(BOOL)a4 isForceRewrite:(BOOL)a5;
- (void)mergeParams:(id)a0 toDict:(id)a1;
- (id)enterFromForLog;
- (void)preloadPoiListTemplate;
- (void)initializeUserTypeChangedCallback:(id /* block */)a0;
- (void)updatePageListInfoWithSearchSpuTabInfo:(BOOL)a0 spuTabSchema:(id)a1;
- (void)initializeSelectCompanyCouponCallback:(id /* block */)a0;
- (void)initializeTitleInfoChangeCallback:(id /* block */)a0;
- (void)initializePublishTrackParamsCallback:(id /* block */)a0;
- (void)p_filterEmptyValue:(id)a0;
- (void)setUp;
- (void).cxx_destruct;
- (void)cleanUp;

@end
