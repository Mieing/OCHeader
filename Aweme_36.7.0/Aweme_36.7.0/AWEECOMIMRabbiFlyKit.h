@class IESForestKit, NSString, BDECRabbiFlyKit;

@interface AWEECOMIMRabbiFlyKit : NSObject <BDECRabbiFlyIInitAdapter, BDECRabbiFlyIAppInfoGetter, BDECRabbiFlyILogger, BDECRabbiFlyITracker, BDECRabbiFlyIBridgeAbility, BDECRabbiFlyIBasicActionAbility, BDECRabbiFlyIAsserter, BDECRabbiFlyIToaster, BDECRabbiFlyIFontService>

@property (retain, nonatomic) BDECRabbiFlyKit *rabbiFlyKit;
@property (retain, nonatomic) IESForestKit *forestKit;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *versionCode;
@property (copy, nonatomic) NSString *updateVersionCode;
@property (copy, nonatomic) NSString *serverDeviceId;
@property (copy, nonatomic) NSString *appChannel;
@property (copy, nonatomic) NSString *jsEngineScript;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isInHouseGecko;
+ (id)sharedInstance;
+ (id)accessKey;

- (void)event:(id)a0 params:(id)a1;
- (void)assert:(BOOL)a0 desc:(id)a1;
- (void)monitorService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (id)getAppId;
- (id)getAppVersion;
- (id)getAppChannel;
- (id)createSupervisorConfigWithChannel:(id)a0 slicePreloadList:(id)a1;
- (id)createDynamicSupervisorWithConfig:(id)a0;
- (void)setupRabbiFlyKit;
- (void)setupAppInfo;
- (void)setupForestKit;
- (void)loadJSEngineScript;
- (id)jsEngineScriptKeyWithURL:(id)a0;
- (id)getAppInfoGetter;
- (id)getTracker;
- (id)getBridgeAbility;
- (id)getBasicActionAbility;
- (id)getForestKit;
- (id)getAsserter;
- (id)getToaster;
- (id)getCommonProps;
- (id)getVersionCode;
- (id)getUpdateVersionCode;
- (id)getServerDeviceId;
- (void)logDWithMethod:(id)a0 msg:(id)a1;
- (void)logIWithMethod:(id)a0 msg:(id)a1;
- (void)logEWithMethod:(id)a0 msg:(id)a1;
- (id)getBridgeHandlerList;
- (id)provideToast;
- (id)provideOpenSchema;
- (id)provideFetch;
- (id)provideCopyToClipboard;
- (id)provideSetStorageItem;
- (id)provideGetStorageItem;
- (id)provideCallPhone;
- (id)provideTracker;
- (id)provideGallery;
- (id)provideTakePhoto;
- (id)provideConfirm;
- (id)provideUploadImage;
- (id)fontWithFontFamily:(id)a0 fontSize:(double)a1 fontWeight:(unsigned long long)a2;
- (void)showToast:(id)a0;
- (void).cxx_destruct;
- (BOOL)isDebugEnabled;
- (id)getLogger;
- (id)init;
- (id)getDeviceType;

@end
