@class IESLiveCommentMentionListView, UIButton, NSString, UIView, IESLiveCommentWidgetQuickEmojiView, IESLiveCommentIntentionsView;
@protocol IESLivePrivilegeDanmakuSwitchProtocol, IESLiveCommentPanelDelegate;

@interface IESLiveCommentPanelNormalImp : IESLiveCommentPanelBaseImp <IESLiveCommentIntentionsViewDelegate, IESLiveCommentMentionListViewDelegate> {
    id<IESLiveCommentPanelDelegate> _delegate;
}

@property (retain, nonatomic) UIView *foldableTopContainer;
@property (retain, nonatomic) IESLiveCommentIntentionsView *intentionsView;
@property (retain, nonatomic) IESLiveCommentMentionListView *mentionListView;
@property (nonatomic) BOOL topContainerIsFold;
@property (retain, nonatomic) UIView<IESLivePrivilegeDanmakuSwitchProtocol> *innerDanmakuSwitch;
@property (retain, nonatomic) UIButton *sendBtn;
@property (retain, nonatomic) IESLiveCommentWidgetQuickEmojiView *quickEmojiView;
@property (retain, nonatomic) UIView *paidDanmakuContainer;
@property (nonatomic) BOOL didPaidDanmakuTabShow;
@property (nonatomic) BOOL didIntentionsShow;
@property (nonatomic) BOOL realMentionEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupInputView;
- (void)setupContainers;
- (void)animateDismissPanelWithCompletion:(id /* block */)a0;
- (void)showCommentPopupViewWithContent:(id)a0 preferredHeight:(double)a1;
- (BOOL)shouldShowIntentnionsView;
- (void)intentionsDidDisplayWithCount:(long long)a0;
- (void)didSelectFusionEmojiWithEmoticonModel:(id)a0;
- (void)didSelectIntentionEntryWithModel:(id)a0;
- (void)mentionListView:(id)a0 willShowWithUserCount:(long long)a1;
- (id)defaultMentionedUsers;
- (BOOL)mentionListView:(id)a0 canSelectUserItem:(id)a1;
- (void)mentionListView:(id)a0 didSelectUserItem:(id)a1;
- (void)mentionListView:(id)a0 didDeselectUserItem:(id)a1;
- (void)clickPaidDanmakuEntry;
- (void)setupPaidDanmakuView;
- (double)getInputViewExtraLeftSpace;
- (void)danmakuCancelAction;
- (void)paidDanmakuViewDidShow:(BOOL)a0;
- (void)heightChangeWithOffset:(double)a0;
- (void)detailAreaChange:(unsigned long long)a0 withDetailView:(id)a1;
- (void)inputView:(id)a0 textDidChange:(id)a1;
- (void)inputView:(id)a0 inputTextReachLimit:(long long)a1;
- (void)inputView:(id)a0 preInput:(id)a1 currentText:(id)a2;
- (void)inputView:(id)a0 mentionTrigger:(BOOL)a1;
- (void)inputView:(id)a0 mentionParamDidChange:(id)a1;
- (void)inputView:(id)a0 editDidRemoveMentionUsers:(id)a1;
- (void)expandEntryView:(id)a0 willDisplayEntryItem:(id)a1;
- (void)expandEntryView:(id)a0 foldStatusWillChangeTo:(BOOL)a1;
- (void)setupQuickReplyContentView;
- (void)setupPaidDanmakuSwitch;
- (void)setupCommentExpandEntrysView;
- (double)getExpandDetailAreaContainerHeight;
- (void)setupPopupView;
- (void)setupIntentionsView;
- (void)setupMentionListView;
- (void)setupCommentWidgetQuickEmojiView;
- (void)setupSendBtn;
- (void)setupSeparator;
- (void)barrageSwitchChanged:(BOOL)a0;
- (void)showSendBtn:(BOOL)a0;
- (void)showPaidDanmakuContainer:(BOOL)a0;
- (void)foldableTopContainerHeightChangeFromHeight:(double)a0 toHeight:(double)a1;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (void)sendAction:(id)a0;
- (void)setupWidgets;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)setupConfig;

@end
