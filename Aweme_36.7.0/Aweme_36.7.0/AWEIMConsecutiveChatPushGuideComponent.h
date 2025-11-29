@class NSString, UIViewController;
@protocol IESIMSheetVCProtocol;

@interface AWEIMConsecutiveChatPushGuideComponent : AWEIMComponentBase <AWEIMConsecutiveChatPushGuideComponentService, IESIMSheetVCDelegate, AWEIMPushGuideTextMsgTipsInteractor_Action>

@property (retain, nonatomic) UIViewController<IESIMSheetVCProtocol> *popUpSheet;
@property (nonatomic) BOOL isFromPopupSheet;
@property (nonatomic) BOOL hasShown;
@property (nonatomic) BOOL hasOpenSwitch;
@property (copy, nonatomic) NSString *showReason;
@property (nonatomic) long long pushGuideNoticeIndex;
@property (copy, nonatomic) id /* block */ onClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_featureEnableInCunrrentContext:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)sheetDidDismiss:(id)a0;
- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowedWithContext:(id)a0;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)hostVC_willDealloc;
- (void)componentDidMounted:(id)a0;
- (long long)messageListPopupViewStatus;
- (void)messageListPopupViewShow;
- (void)openAction;
- (void)newInsertMessageAtGloabalIndex:(long long)a0;
- (void)reInsertMessageAtGloabalIndex:(long long)a0;
- (void)p_showGuideViewByIconChange;
- (BOOL)p_canShowPopupView;
- (void)p_outAppNotifyGuideLogWithEventType:(id)a0;
- (void)p_openReceivePushOnlyFromFrends;
- (void)p_changeSettingWithField:(id)a0 value:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)closeAction;
- (void)handleDidBecomeActive:(id)a0;

@end
