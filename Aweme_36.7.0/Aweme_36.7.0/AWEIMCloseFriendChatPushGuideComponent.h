@class NSString, UIViewController;
@protocol IESIMContentSheetVCProtocol;

@interface AWEIMCloseFriendChatPushGuideComponent : AWEIMComponentBase <AWEIMCloseFriendChatPushGuideComponentService, AWEIMPushGuideTextMsgTipsInteractor_Action, AWEIMMessageListDataAction, IESIMSheetVCDelegate>

@property (retain, nonatomic) UIViewController<IESIMContentSheetVCProtocol> *popUpSheet;
@property (nonatomic) BOOL hasShown;
@property (nonatomic) BOOL didClickOpen;
@property (nonatomic) long long pushGuideNoticeIndex;
@property (copy, nonatomic) id /* block */ onClose;
@property (nonatomic) BOOL closeOnPermissionReallyOpened;
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
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (long long)messageListPopupViewStatus;
- (void)messageListPopupViewShow;
- (void)openAction;
- (void)newInsertMessageAtGloabalIndex:(long long)a0;
- (void)reInsertMessageAtGloabalIndex:(long long)a0;
- (BOOL)p_canShowPopupView;
- (void)p_outAppNotifyGuideLogWithEventType:(id)a0;
- (void)p_openReceivePushOnlyFromFrends;
- (void)gotoSystemNotificationSettingAdaptIOS15;
- (void)p_changeSettingWithField:(id)a0 value:(id)a1 completion:(id /* block */)a2;
- (BOOL)p_checkCanShowPushGuideForReceiveMsg:(id)a0 reason:(long long)a1;
- (void)p_showGuideViewByApproveCloseFriend;
- (long long)p_notOpenCount;
- (void)p_setNotOpenCount:(long long)a0;
- (void)p_setLastShowTime:(double)a0;
- (BOOL)p_checkCanShowPushGuideForEnterMessageList;
- (id)p_outAppNotifyGuideLogParamsWithEventType:(id)a0;
- (BOOL)p_isCloseFriend;
- (double)p_lastShowTimeStamp;
- (id)p_getConversation;
- (id)p_lastTimeKey;
- (id)p_notOpenCountKey;
- (void).cxx_destruct;
- (void)closeAction;
- (void)handleDidBecomeActive:(id)a0;
- (id)init;

@end
