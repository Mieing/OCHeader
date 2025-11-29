@class WAMenuPopInteractiveTransition, NSString, UIScreenEdgePanGestureRecognizer, UILabel, UIScrollView, UIButton;
@protocol IWARichTextViewHelper;

@interface WAAuthorizeInfoPageSheet : WAPageSheet <WAPopInteractiveTransitionDelegate, WARichTextViewHelperDelegate>

@property (nonatomic) double pageSheetHeight;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) id<IWARichTextViewHelper> richTextHelper;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *info;
@property (retain, nonatomic) WAMenuPopInteractiveTransition *popIT;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *panGR;
@property (copy, nonatomic) id /* block */ openUrlAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 info:(id)a1 height:(double)a2;
- (id)initWithTitle:(id)a0 info:(id)a1;
- (id)initWithInfo:(id)a0;
- (void)_setupUI;
- (void)layoutSubViews;
- (double)contentHeight;
- (void)backButtonClick:(id)a0;
- (void)onPopBackInteractiveTransitionBegin:(id)a0;
- (void)onLinkClicked:(id)a0 linkRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
