@class HTSLiveAskExplainSettingApi, HTSEventContext, RACSubject, IESLiveGuideModel;
@protocol IESLiveAskExplainPreferenceService, IESLiveAuthorizationControllerProvider;

@interface IESLiveAskExplainViewModel : NSObject

@property (retain, nonatomic) RACSubject *askExplainConfSubject;
@property (retain, nonatomic) RACSubject *settingViewStateSubject;
@property (retain, nonatomic) HTSLiveAskExplainSettingApi *askExplainSettingApi;
@property (retain, nonatomic) id<IESLiveAskExplainPreferenceService> askExplainPreference;
@property (retain, nonatomic) id<IESLiveAuthorizationControllerProvider> authorizationService;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (copy, nonatomic) id /* block */ callback;

- (void)recoverLastConfig:(id)a0 toast:(id)a1;
- (void)updateAskExplainSettingModel;
- (id)askExplainConfigChangeSignal;
- (id)settingViewStateSignal;
- (void)updateAskExplainEnable:(BOOL)a0 lastConfig:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
