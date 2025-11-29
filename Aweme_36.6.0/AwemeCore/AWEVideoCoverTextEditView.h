@class AWECoverTextEditingModel, NSString, AWECoverTextStickerView, UIView, AWEVideoPublishViewModel, ACCAnimatedButton;
@protocol AWEStoryToolBarProtocol;

@interface AWEVideoCoverTextEditView : UIView <UIGestureRecognizerDelegate>

@property (nonatomic) double fontScale;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) ACCAnimatedButton *finishButton;
@property (retain, nonatomic) UIView *clipView;
@property (retain, nonatomic) AWECoverTextStickerView *stickerView;
@property (copy, nonatomic) AWECoverTextEditingModel *editingModel;
@property (nonatomic) BOOL animating;
@property (nonatomic) struct CGPoint { double x; double y; } previewCenter;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } previewTransform;
@property (nonatomic) struct CGPoint { double x; double y; } basicCenter;
@property (nonatomic) double keyboardHeight;
@property (retain, nonatomic) UIView<AWEStoryToolBarProtocol> *toolBar;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)panAction:(id)a0;
- (void)handleKeyboardChangeFrameNoti:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 publishViewModel:(id)a1 fontScale:(double)a2;
- (void)startEditWithModel:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (void)updateToolBarStyle;
- (struct CGPoint { double x0; double x1; })p_calculateEditCenter;
- (BOOL)storyTextMode;
- (void)configStoryTextViews;
- (void)didClickedFinish;
- (void)didClickColor:(id)a0 indexPath:(id)a1;
- (void)didClickFont:(id)a0 indexPath:(id)a1;
- (void)didClickedLeftButton:(id)a0;
- (void)didClickedAlignmentButton:(id)a0;
- (id)p_getAlignmentButtonAccessibilityLabel:(long long)a0;
- (void)closeSelf:(id)a0 textModel:(id)a1 location:(unsigned long long)a2;
- (void)p_trackChangeStyle:(unsigned long long)a0;
- (void)p_trackChangeAlignment:(long long)a0;
- (void)p_trackSelectedColor:(id)a0;
- (void)p_trackSelectedFont:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)commonInit;
- (void)dealloc;
- (void)configureViews;
- (void)tapAction:(id)a0;
- (void)p_addObservers;

@end
