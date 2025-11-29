@class AWEUGInnerPushCommonModel, NSString, NSArray, AWEUGPushGuideConfig, AWEUGInnerPushExtraModel, NSMutableDictionary, AWEUGPushGuideModel, AWEUGInnerPushExtraSelectionModel;
@protocol AWEUGPushGuideLifeCycleProtocol;

@interface AWEUGPushGuideViewModel : NSObject

@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) AWEUGInnerPushCommonModel *model;
@property (retain, nonatomic) AWEUGInnerPushExtraModel *pushExtraModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEUGPushGuideConfig *config;
@property (retain, nonatomic) AWEUGInnerPushExtraModel *selectiveGuideModel;
@property (retain, nonatomic) AWEUGPushGuideModel *simpleNewGuideModel;
@property (nonatomic) unsigned long long viewStyle;
@property (retain, nonatomic) AWEUGInnerPushExtraSelectionModel *currentSelection;
@property (weak, nonatomic) id<AWEUGPushGuideLifeCycleProtocol> lifeCycle;
@property (copy, nonatomic) NSArray *dynamicModels;
@property (nonatomic) BOOL isSubscription;
@property (nonatomic) BOOL isFromSubscription;
@property (nonatomic) BOOL isNeedShowPushGuideFromSubscribe;
@property (retain, nonatomic) NSMutableDictionary *actions;
@property (nonatomic) BOOL isAutoDismiss;

- (void)viewDidDismiss;
- (void)viewDidShow;
- (id)guideFromGeckoWithFileName:(id)a0;
- (void)clickCancel:(BOOL)a0;
- (void)clickConfirm;
- (void)viewFailToShow:(id)a0;
- (void)parseGuideModel;
- (void)trackSubscribeWithEvent:(id)a0 eventType:(id)a1 failedReason:(id)a2;
- (void)tryHandleSubscribeCompletion:(BOOL)a0 status:(unsigned long long)a1;
- (void)trackOutAppNotifyWithEventType:(id)a0 failedReason:(id)a1;
- (void)jumpToExternalNotiSettingsAndUpdateInternalSettings;
- (void)updateSettingsWithKey:(id)a0 value:(id)a1;
- (id)trackOutAppNotifyParamsWithEventType:(id)a0 failedReason:(id)a1;
- (id)p_guideShowReason;
- (void)intentiveRewardWithOpen:(BOOL)a0;
- (void)updateUserSettings;
- (void)trackPushClick;
- (void)trackPushPrePermissionAuth;
- (id)buildCommonReportParams:(id)a0 failedReason:(id)a1;
- (id)initWithScene:(id)a0 model:(id)a1 config:(id)a2 lifeStyle:(id)a3;
- (void)updateSelection:(id)a0;
- (void).cxx_destruct;

@end
