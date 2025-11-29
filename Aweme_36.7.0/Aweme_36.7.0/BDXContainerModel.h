@class BDUIStatusBarStyleParam, NSString, NSURL, NSArray, BDXLaunchModeParam, BDStringParam, NSNumber, UIColor;

@interface BDXContainerModel : NSObject <BDSchemaModelProtocol>

@property (copy, nonatomic) NSString *bid;
@property (copy, nonatomic) NSString *enterFromBid;
@property (copy, nonatomic) NSString *bidType;
@property (retain, nonatomic) UIColor *containerBgColor;
@property (retain, nonatomic) UIColor *loadingBgColor;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL showLoading;
@property (retain, nonatomic) NSURL *fallbackUrl;
@property (nonatomic) double fontScale;
@property (nonatomic) double viewZoom;
@property (retain, nonatomic) NSNumber *enableAppViewZoom;
@property (retain, nonatomic) NSNumber *enableAppFontScale;
@property (nonatomic) BOOL forceH5;
@property (nonatomic) long long loadingDuration;
@property (nonatomic) BOOL prerender;
@property (nonatomic) BOOL showError;
@property (copy, nonatomic) NSString *viewTag;
@property (retain, nonatomic) BDStringParam *bdxTag;
@property (copy, nonatomic) NSString *prefetchBusiness;
@property (retain, nonatomic) BDXLaunchModeParam *launchMode;
@property (nonatomic) BOOL shouldSendClearTopEvent;
@property (nonatomic) BOOL enableTrack;
@property (nonatomic) BOOL enableAdvancedMonitor;
@property (nonatomic) BOOL enbalePadAdapter;
@property (retain, nonatomic) NSNumber *iPadRatio;
@property (nonatomic) BOOL enableNewPrefetch;
@property (nonatomic) BOOL syncInjectPrefetchData;
@property (nonatomic) BOOL disablePrefetch;
@property (nonatomic) BOOL enableFluencyCollection;
@property (copy, nonatomic) NSArray *storageKeys;
@property (copy, nonatomic) NSArray *userDomainStorageKey;
@property (copy, nonatomic) NSArray *bulletDefaultDomainStorageKeys;
@property (nonatomic) double loadingCenter;
@property (copy, nonatomic) NSArray *nativeTriggerShowHideEvent;
@property (retain, nonatomic) BDUIStatusBarStyleParam *statusFontMode;
@property (nonatomic) BOOL useLastStatusBarStyle;
@property (nonatomic) BOOL screenSizeAdaptation;
@property (copy, nonatomic) NSString *monitorReportPerf;
@property (retain, nonatomic) NSNumber *openAnimate;
@property (retain, nonatomic) NSString *padAdapter;
@property (nonatomic) BOOL enablePadRotate;
@property (retain, nonatomic) UIColor *contentBgColor;
@property (retain, nonatomic) UIColor *containerLightBgColor;
@property (retain, nonatomic) UIColor *containerDarkBgColor;
@property (nonatomic) BOOL showBack;
@property (nonatomic) BOOL shouldUseAnniePro;
@property (copy, nonatomic) NSString *apAppId;
@property (nonatomic) BOOL preCreateEngine;
@property (nonatomic) BOOL reuseEngine;
@property (nonatomic) BOOL enableCardPenetrated;
@property (nonatomic) BOOL enableAnniePiperMethodsForCommonBiz;
@property (nonatomic) BOOL autoUpdateTheme;
@property (nonatomic) BOOL anniexIosIsPageConcurrentLoad;
@property (nonatomic) BOOL disableCloseWhenAddView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)modelWithSchemaData:(id)a0;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void)updateWithSchemaData:(id)a0;
- (void).cxx_destruct;

@end
