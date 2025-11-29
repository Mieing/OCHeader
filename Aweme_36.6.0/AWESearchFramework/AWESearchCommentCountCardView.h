@class AWEAIOriginalPageContext, AWEBinding, UILabel, UIView;

@interface AWESearchCommentCountCardView : AWESearchCachalotBaseCardView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIView *separatorView;
@property (weak, nonatomic) AWEBinding *binding;
@property (weak, nonatomic) AWEAIOriginalPageContext *pageContext;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (id)formatedNumber:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)componentView;
- (void)setupUI;

@end
