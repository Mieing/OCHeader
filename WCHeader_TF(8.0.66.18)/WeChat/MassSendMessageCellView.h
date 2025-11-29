@class MassSendBodyContainerView, NSString, MassSendMessageViewModel, UIView, UILabel, UIButton;

@interface MassSendMessageCellView : BaseMessageCellView <IAudioReceiverExt, MMRTCMenuResponderDelegate, MMRichTextSelectEventDelegate, MsgImgFullScreenTransitionObject> {
    MassSendBodyContainerView *m_bodyContainerView;
    UIView *m_bodyView;
    UIView *m_separatorView;
    UILabel *m_receiverLabel;
    UIButton *m_sendAgainBtn;
    UIView *m_maskImageView;
}

@property (readonly, nonatomic) MassSendMessageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)layoutContentView;
- (id)displayViewForImageBrowser;
- (void)setHighlighted:(BOOL)a0;
- (void)highlightMsgAnimatedWithHighlightTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)showOperationMenu;
- (void)onAppear;
- (void)initReceiverLabel;
- (void)initSendAgainButton;
- (void)initMaskImageView;
- (void)initBodyContainerView;
- (void)initBodyView;
- (id)FormTextView;
- (id)FormImageView;
- (id)FormVoiceView;
- (id)FormVideoView;
- (id)FormEmoticonView;
- (id)FormFinderContentView;
- (void)onImageClicked;
- (void)onVideoClicked;
- (void)onVoiceClicked;
- (void)onEmoticonClicked;
- (void)onFinderClicked;
- (void)onSendAgain:(id)a0;
- (void)onLongTouch:(struct CGPoint { double x0; double x1; })a0;
- (void)onLongPressWithRichTextCoverView;
- (void)stopAudioPlaying;
- (void)OnEndPlaying:(id)a0 isForceStop:(BOOL)a1;
- (void)onRichTextViewExit;
- (id)getCurrentViewController;
- (id)getForwardingMenuActionTarget:(SEL)a0;
- (void)onSingleTapRTCV;
- (void)onRemoveRTCV;
- (id)getViewController;
- (void)onCopy:(id)a0;
- (void)onDelete:(id)a0;
- (void)hideComponent;
- (void)showComponent;
- (void)animateShowComponentWithDuration:(double)a0;
- (void).cxx_destruct;

@end
