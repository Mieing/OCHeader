@class UIView, NSString, UIImageView, UIButton, CAGradientLayer, RichTextView, UILabel, UIScrollView;
@protocol MMAuthorizeViewControllerDelegate;

@interface MMAuthorizeOverseasViewController : MMUIViewController <ILinkEventExt>

@property (retain, nonatomic) UIButton *comfirmBtn;
@property (retain, nonatomic) UIButton *denyBtn;
@property (retain, nonatomic) UIView *scrollContainerView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) CAGradientLayer *gradientMaskLayer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *dot1;
@property (retain, nonatomic) UIImageView *dot2;
@property (retain, nonatomic) RichTextView *contentLabel1;
@property (retain, nonatomic) RichTextView *contentLabel2;
@property (weak, nonatomic) id<MMAuthorizeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (BOOL)shouldInteractivePop;
- (void)initSubviews;
- (void)viewDidLayoutSubviews;
- (void)initTitleView;
- (void)initContentView;
- (id)genContentTextView;
- (void)fillContentLabel;
- (void)initFooterView;
- (void)onComfirmBtnClick;
- (void)onDenyBtnClick;
- (void)onReturn;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
