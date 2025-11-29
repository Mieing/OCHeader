@class HTSLiveAskExplainSettingApi, NSString;

@interface IESLiveAskExplainPreferenceIMP : NSObject <IESLiveAskExplainPreferenceService>

@property (retain, nonatomic) HTSLiveAskExplainSettingApi *askExplainSettingApi;
@property (nonatomic) BOOL askExplainAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)markEntryShown;
- (BOOL)isEntryShownBefore;
- (void)requestAskExplainSettingWithCompletion:(id /* block */)a0;
- (id)latestConfig;
- (void)updateAskExplainSetting:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
