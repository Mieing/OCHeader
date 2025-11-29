@class HTSEventContext, RACSubject, IESLiveGuideModel, HTSLiveReplaySettingApi;
@protocol IESLiveAnchorRecordPreferenceService, IESLiveAuthorizationControllerProvider;

@interface IESLiveReplayViewModel : NSObject

@property (retain, nonatomic) RACSubject *replayConfSubject;
@property (retain, nonatomic) RACSubject *settingViewStateSubject;
@property (retain, nonatomic) HTSLiveReplaySettingApi *replaySettingApi;
@property (retain, nonatomic) id<IESLiveAnchorRecordPreferenceService> recordPreference;
@property (retain, nonatomic) id<IESLiveAuthorizationControllerProvider> authorizationService;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (copy, nonatomic) id /* block */ callback;

- (void)recoverLastConfig:(id)a0 toast:(id)a1;
- (id)settingViewStateSignal;
- (void)updateReplaySwitchType:(long long)a0 enable:(BOOL)a1 roomID:(id)a2 lastConfig:(id)a3 completion:(id /* block */)a4;
- (void)updateReplaySettingModel;
- (id)replayConfigChangeSignal;
- (void)authorizationToXiguaToutiao;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
