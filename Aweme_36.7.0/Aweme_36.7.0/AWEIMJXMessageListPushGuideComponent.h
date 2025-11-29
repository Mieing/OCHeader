@class NSSet, UIViewController, NSString;
@protocol IESIMContentSheetVCProtocol;

@interface AWEIMJXMessageListPushGuideComponent : AWEIMComponentBase <AWEIMMessageListPushGuideComponentService, AWEIMPushGuideTextMsgTipsInteractor_Action, AWEIMMessageListDataAction, IESIMSheetVCDelegate, IESIMUGPushGuideByPitayaExecutorMessage>

@property (nonatomic) long long popupViewStatus;
@property (copy, nonatomic) id /* block */ popupViewStatusBlock;
@property (nonatomic) BOOL hasNotice;
@property (nonatomic) long long noticeGlobalIndex;
@property (copy, nonatomic) NSSet *messageGlobalIndexSet;
@property (nonatomic) BOOL hasBanner;
@property (retain, nonatomic) UIViewController<IESIMContentSheetVCProtocol> *popUpSheet;
@property (nonatomic) BOOL isFromPopupSheet;
@property (copy, nonatomic) id /* block */ onClose;
@property (nonatomic) BOOL isCloseForPushGuideOpen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_featureEnableInCunrrentContext:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)messageDataControllerDidModified;
- (void)hostVC_willDealloc;
- (void)componentDidMounted:(id)a0;
- (long long)messageListPopupViewStatus;
- (void)messageListPopupViewShow;
- (void)asyncGetMessageListPopupViewStatus:(id /* block */)a0;
- (void)showPitayaPushGuideFail;
- (void)showPitayaPushGuide:(id)a0 params:(id)a1;
- (void)newInsertMessageAtGloabalIndex:(long long)a0;
- (void)reInsertMessageAtGloabalIndex:(long long)a0;
- (void)didPushBannerShow;
- (BOOL)p_canShowPopupView;
- (void)p_outAppNotifyGuideLogWithEventType:(id)a0;
- (void)p_openReceivePushOnlyFromFrends;
- (void)p_changeSettingWithField:(id)a0 value:(id)a1 completion:(id /* block */)a2;
- (id)p_lastTimeKey;
- (void)p_loadLatestMessageGlobalIndexIfNeeded;
- (double)p_lastLogTimeStamp;
- (void)p_invokeFailedShowPopupViewBlock;
- (void)p_setLastLogTime:(double)a0;
- (BOOL)p_hasNotice;
- (void).cxx_destruct;
- (void)handleDidBecomeActive:(id)a0;

@end
