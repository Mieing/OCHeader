@class IESLiveSettingsApi, HTSLiveApi, IESLiveSettingsStorageNew;

@interface IESLiveSettingsManager : NSObject

@property (nonatomic) long long serviceId;
@property (nonatomic) long long methodId;
@property (retain, nonatomic) IESLiveSettingsApi *settingsApi;
@property (getter=isFetching) BOOL fetching;
@property (retain, nonatomic) HTSLiveApi *api;
@property (nonatomic) BOOL hasFetchedSuccess;
@property (nonatomic) double fetchedSuccessTime;
@property (nonatomic) double delayFetchedInSeconds;
@property (nonatomic) long long delayFetchedSetting;
@property (readonly, nonatomic) IESLiveSettingsStorageNew *settings;

+ (id)sharedManager;

- (void)fetchSettingsIsForcible:(BOOL)a0 isColdLaunch:(BOOL)a1;
- (void)onFrontierReceivingMessage:(id)a0;
- (id)p_errorWithCode:(long long)a0 message:(id)a1;
- (void)resetFreezedSettingsWithWhiteList:(id)a0;
- (id)filterValueForKey:(id)a0;
- (void)configDelayFetchedInSeconds;
- (void)p_fetchSettingsIfNeeded:(id)a0;
- (BOOL)isValidMessageForSetting:(id)a0;
- (void)p_trackSettingLite:(id)a0 error:(id)a1;
- (void)p_fetchSettingsLiteWithHeaders:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (id)p_readDolphinInfo;
- (void)logLargeDict:(id)a0;
- (void)p_writeSettingsInfo:(id)a0;
- (void)_logInfoWithHasVlidData:(BOOL)a0 errorCode:(long long)a1 requestType:(id)a2 responseDic:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
