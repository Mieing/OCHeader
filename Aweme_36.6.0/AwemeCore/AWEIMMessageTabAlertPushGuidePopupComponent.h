@class AWEUGInnerPushCommonModel, NSString, AWEIMMessageTabAlertPushGuideTextConfig;
@protocol AWEIMMessageTabPopupViewInterface;

@interface AWEIMMessageTabAlertPushGuidePopupComponent : AWEIMComponentBase <AWEIMMessageTabPopupViewProtocol, DUXAlertDialogDelegate, AWEUGPushGuideByPitayaExecutorDelegate, AWEUGPushGuideLifeCycleProtocol>

@property (nonatomic) BOOL isDisplaying;
@property (nonatomic) BOOL isFromAlertPushGuideView;
@property (copy, nonatomic) id /* block */ popupViewFinishedBlock;
@property (nonatomic) double lastEntryMessageTabTime;
@property (nonatomic) BOOL isInIntervalDayFirstEnterMessageTab;
@property (retain, nonatomic) AWEUGInnerPushCommonModel *pSortBackModel;
@property (retain, nonatomic) AWEIMMessageTabAlertPushGuideTextConfig *alertConfig;
@property (copy, nonatomic) NSString *pitayaShowReason;
@property (nonatomic) BOOL hasTrackForSheetView;
@property (nonatomic) BOOL isPitayaReadyInFirstEnterMessageTab;
@property (weak, nonatomic) id<AWEIMMessageTabPopupViewInterface> messageTabPopupViewInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)alertDialogDidDismiss:(id)a0;
- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowedWithContext:(id)a0;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)trackWithEvent:(id)a0;
- (void)showPitayaPushGuide:(id)a0;
- (void)onPitayaTriggerFailed:(id)a0;
- (void)pushGuideShowFail:(id)a0;
- (void)pushGuideShowSuccess:(id)a0;
- (void)pushGuideDismiss:(id)a0;
- (void)pushGuideActionCancel:(id)a0;
- (void)pushGuideActionConfirm:(id)a0 selectionType:(id)a1;
- (BOOL)p_canShowPopupView;
- (void)p_changeSettingWithField:(id)a0 value:(id)a1 completion:(id /* block */)a2;
- (BOOL)isDisplayingCurrentPopupView;
- (BOOL)canLimitShowWithinTime;
- (void)asyncShowPopupViewIfNeeded:(id /* block */)a0;
- (id)messageTabAlertPushGuideFreqAndActiveLevelDict;
- (void)p_showAlertPopupView;
- (id)p_showReason;
- (void)alertPushGuideCloseAction;
- (void)alertPushGuideOpenAction;
- (void)p_openReceivePushOnlyFromFriends;
- (void).cxx_destruct;
- (void)handleDidBecomeActive:(id)a0;
- (void)dealloc;

@end
