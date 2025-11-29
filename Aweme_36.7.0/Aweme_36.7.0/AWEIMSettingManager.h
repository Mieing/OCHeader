@class NSString, AWEIMSettingModel;

@interface AWEIMSettingManager : NSObject <AWESettingsComboRequestProtocol, AWEIMSettingManagerProtocol>

@property (retain, nonatomic) AWEIMSettingModel *model;
@property (nonatomic) BOOL lastFetchSuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)settingsRequestParamsDictionary;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:(id)a0;
+ (void)doOriginalActions;
+ (void)updateSettingsFailedWithStatusCode:(long long)a0;
+ (void)asynJsonModelWithIMSettings:(id)a0;
+ (void)updateBusinessConfigStorageIfNeed:(id)a0;
+ (id)sharedInstance;

- (void)dealloc;
- (id)chatBlockSettingModel;
- (void)updateWhoCanMessageMeWithSwitchValues:(id)a0 completion:(id /* block */)a1;
- (void)saveCurrentModel;
- (void)fetchIMSettingWithSource:(id)a0 completion:(id /* block */)a1;
- (void)fetchIMSettingWithCompletion:(id /* block */)a0;
- (void)clearIMSettingWhenLogout;
- (void)updateUserSettingsWithParam:(id)a0 completion:(id /* block */)a1;
- (void)autoSetWhoCanMessageMeValueIfNeededWithCompletion:(id /* block */)a0;
- (void)changeChatPrivacy:(long long)a0 withURL:(id)a1 completion:(id /* block */)a2;
- (void)updateChatBlockSettingModel:(id)a0 completion:(id /* block */)a1;
- (void)tryFetchIMSettingIfNeeded;
- (BOOL)isEmptyModel;
- (void)fetchIMSettingWithRetry:(BOOL)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)fetchIMSettingWithSource:(id)a0 needRetry:(BOOL)a1 context:(id)a2 completion:(id /* block */)a3;
- (void)setGuideShowTimes:(long long)a0 guideID:(id)a1 completion:(id /* block */)a2;
- (id)guideControlModelWithGuideID:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
