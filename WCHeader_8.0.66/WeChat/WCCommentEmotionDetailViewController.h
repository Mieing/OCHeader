@class UIView, WCCommentBigEmoticonView, SnsEmojiInfoObj, WXFullScreenGestureRecognizer, NSString, EmoticonCustomManageAddLogic, MMUIButton, WCZoomTransitionAnimator;

@interface WCCommentEmotionDetailViewController : MMUIViewController <FullScreenGestureDelegate, MMUIViewControllerDelegate>

@property (retain, nonatomic) WCCommentBigEmoticonView *emotionView;
@property (retain, nonatomic) MMUIButton *closeBtn;
@property (retain, nonatomic) EmoticonCustomManageAddLogic *addEmoticonLogic;
@property (retain, nonatomic) WXFullScreenGestureRecognizer *fullScreenGesture;
@property (nonatomic) BOOL disableLongPress;
@property (retain, nonatomic) SnsEmojiInfoObj *snsEmojiInfoObj;
@property (retain, nonatomic) WCZoomTransitionAnimator *transition;
@property (retain, nonatomic) UIView *bgView;
@property (nonatomic) BOOL isPresentModal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showInViewController:(id)a0 startView:(id)a1 startFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 snsEmojiInfoObj:(id)a3 isPresentModal:(BOOL)a4;
+ (void)showInViewController:(id)a0 startView:(id)a1 startFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 snsEmojiInfoObj:(id)a3 isPresentModal:(BOOL)a4 disableLongPress:(BOOL)a5;

- (id)init;
- (id)initWithStartFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 startView:(id)a1;
- (void)viewDidLoad;
- (BOOL)shouldHideNavigationBar;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidTransitionToNewSize;
- (void)relayoutOnTransition;
- (void)viewDidLayoutSubviews;
- (id)createEmotionView;
- (void)closeTransparentVC:(id)a0;
- (void)openEmotionDetailVC:(id)a0;
- (id)getEmoticonWrap;
- (void)handleTap:(id)a0;
- (void)handleLongPress:(id)a0;
- (id)getAddEmoticonWrap;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
- (void)onFullScreenDragToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onFullScreenBackgroundColorAlphaChange:(double)a0;
- (void)onFullScreenDragEnd;
- (void).cxx_destruct;

@end
