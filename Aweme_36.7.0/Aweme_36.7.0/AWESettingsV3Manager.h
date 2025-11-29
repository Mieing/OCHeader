@class NSString, NSTimer, NSMutableDictionary, NSPointerArray, NSNumber;

@interface AWESettingsV3Manager : NSObject <AWESettingsV3ManagerProtocol, AWESettingsComboRequestProtocol, AWESettingsPushMessage> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _requestModifiersLock;
}

@property (copy, nonatomic) NSString *settingV3CtxInfo;
@property (copy, nonatomic) NSString *pullTaskData;
@property (copy, nonatomic) NSString *pullTaskIDs;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) unsigned long long lastTimestamp;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) BOOL isAppendedRequestOnAir;
@property (nonatomic) BOOL elderModeOn;
@property (copy, nonatomic) NSString *settingsFP;
@property (retain, nonatomic) NSNumber *groupNum;
@property (retain, nonatomic) NSString *settingsFPAll;
@property (retain, nonatomic) NSMutableDictionary *businessBlocksDictionary;
@property (retain, nonatomic) NSPointerArray *requestModifiers;
@property (nonatomic) BOOL disablePrintLogTwice;
@property (nonatomic) long long defaultDelayPrintLogTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)settingsRequestParamsDictionary;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:(id)a0;
+ (void)doOriginalActions;
+ (id)sharedInstance;
+ (void)setup;

- (void)addAPIRequestModifier:(id)a0;
- (void)setElderModeStateRequestParam:(BOOL)a0;
- (void)onReceiveByteSyncData:(id)a0;
- (void)callAPIRequestModifiersForRequest:(id)a0;
- (void)fetchSettingsV3ConfigWithHeaders:(id)a0;
- (void)handleByteSyncData:(id)a0;
- (void)fetchAppendedConfigWithTrackerExtracParams:(id)a0;
- (BOOL)validateSettingWithMD5:(id)a0 config:(id)a1;
- (void)pullAppendedConfigWithHeaders:(id)a0 trackerExtracParams:(id)a1;
- (id)settingsV3RequestParams;
- (BOOL)enableIncrementalUpdate;
- (BOOL)enableCheckLastUpdateType;
- (void)clearGroupNumAndFPAll;
- (void)handleSettingsResponse:(id)a0 error:(id)a1;
- (id)settingsFPAllGroupNum;
- (long long)delayPrintLog;
- (void)registerBusiness:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
