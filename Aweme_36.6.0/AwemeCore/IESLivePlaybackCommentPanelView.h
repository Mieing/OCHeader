@class IESLivePlaybackEmoticonView, NSString, NSDictionary, UIView, UIGestureRecognizer, IESLivePlaybackCommentPanelViewModel;
@protocol IESLivePlaybackCommentInputProtocol, IESLivePlaybackCommentPanelViewDelegate;

@interface IESLivePlaybackCommentPanelView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) IESLivePlaybackCommentPanelViewModel *viewModel;
@property (retain, nonatomic) IESLivePlaybackEmoticonView *emoticonView;
@property (retain, nonatomic) UIGestureRecognizer *pan;
@property (weak, nonatomic) id<IESLivePlaybackCommentPanelViewDelegate> delegate;
@property (retain, nonatomic) UIView<IESLivePlaybackCommentInputProtocol> *commentView;
@property (retain, nonatomic) UIView *keyboardContainerView;
@property (copy, nonatomic) NSDictionary *keyboardHideUserInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel;
- (void)refreshLayout:(long long)a0;
- (id)initWithViewModel:(id)a0 delegate:(id)a1;
- (double)extraHeight;
- (void)zoneClicked:(struct CGPoint { double x0; double x1; })a0;
- (void)resignKeyboardResponder;
- (void)updateCommentContent:(id)a0;
- (void)clearCommentInput;
- (double)overHeight;
- (void)becomeKeyboardResponder;
- (void)observeActions;
- (void)setupCommentView;
- (void)setupEmoticonView;
- (void)switchKeyboardTo:(unsigned long long)a0;
- (void)addPanGesture;
- (void).cxx_destruct;
- (BOOL)isFirstResponder;
- (void)didMoveToSuperview;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)willMoveToSuperview:(id)a0;
- (void)dealloc;
- (void)setupUI;
- (void)panned:(id)a0;

@end
