@class NSString;
@protocol AWEIMMessageListPushGuideBannerComponentInterface;

@interface AWEIMPushGuideTextMsgTipsInteractor : AWEIMComponentBase <AWEIMMessageListDataAction, AWEIMPushGuideTextMsgTipsInteractorInterface>

@property (nonatomic) BOOL hasPushGuideNoticeOnScreen;
@property (nonatomic) unsigned long long requestServerCount;
@property (weak, nonatomic) id<AWEIMMessageListPushGuideBannerComponentInterface> pushGuideBannerService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)didReceiveSendMessageResponse:(id)a0 message:(id)a1 result:(BOOL)a2;
- (void)didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (id)vcParent;
- (void)pushGuideMessageOnScreenAgain;
- (void)showPushGuideNoticeMessageTipIfNeeded;
- (id)p_calculateFakeNoticeWithContent:(id)a0 title:(id)a1;
- (void)p_pubishInsertNoticeMessageGlobalIndex:(long long)a0 isNew:(BOOL)a1;
- (void)p_markPushGuideNoticeTip;
- (void)showCardStyleNoticeIfNeededByLocalMcok;
- (void)addLocalNoticeMessageWithContent:(id)a0 title:(id)a1 imageURL:(id)a2 btnText:(id)a3;
- (BOOL)p_canShowPushGuideNoticeMessageTip;
- (void)showCardStyleNoticeIfNeeded;
- (void)showTextStyleNoticeIfNeeded;
- (BOOL)p_shouldShowPushGuideMessageTip;
- (double)p_lastTimeShowGuideNoitce;
- (void).cxx_destruct;

@end
