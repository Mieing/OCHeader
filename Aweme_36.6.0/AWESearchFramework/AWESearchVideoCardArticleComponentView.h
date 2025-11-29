@class UIImageView, AWESearchVideoCardArticleComponentViewModel, UIView, YYLabel;

@interface AWESearchVideoCardArticleComponentView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWESearchVideoCardArticleComponentViewModel *model;

+ (struct CGSize { double x0; double x1; })componentSizeForViewModel:(id)a0 width:(double)a1;
+ (id)titleFromViewModel:(id)a0;
+ (id)contentFromViewModel:(id)a0;
+ (struct CGSize { double x0; double x1; })titleSizeWithViewModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })contentSizeWithViewModel:(id)a0 width:(double)a1;

- (void)doLayout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refreshUI;
- (void)setupSubviews;

@end
