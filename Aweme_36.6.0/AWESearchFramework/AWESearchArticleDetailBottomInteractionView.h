@class UIStackView, AWESearchArticleDetailCommentInputView, AWESearchArticleDetailPageContext, UIView;

@interface AWESearchArticleDetailBottomInteractionView : UIView

@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIStackView *itemStackView;
@property (retain, nonatomic) AWESearchArticleDetailCommentInputView *inputView;
@property (weak, nonatomic) AWESearchArticleDetailPageContext *pageContext;

+ (double)viewHeight;
+ (double)containerHeight;

- (void)bindPageContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;

@end
