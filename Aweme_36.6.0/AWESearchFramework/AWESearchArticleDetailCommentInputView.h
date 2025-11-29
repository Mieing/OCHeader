@class YYLabel, AWEBinding, AWESearchArticleDetailPageContext;

@interface AWESearchArticleDetailCommentInputView : UIView

@property (retain, nonatomic) YYLabel *textLabel;
@property (retain, nonatomic) AWEBinding *binding;
@property (weak, nonatomic) AWESearchArticleDetailPageContext *pageContext;

- (void)bindPageContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;
- (id)placeholderString;

@end
