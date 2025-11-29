@class AWEIMMessageLoadingCircleView, UILabel;

@interface AWEIMMessageTabLoadingView : UIView

@property (retain, nonatomic) AWEIMMessageLoadingCircleView *loadingAnimView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *ellipsisLabel;
@property (nonatomic) unsigned long long currentStatus;

- (void)changeStatus:(unsigned long long)a0 normalTitle:(id)a1;
- (void)p_layoutViews;
- (void)p_handleLoadingAnimView:(unsigned long long)a0;
- (void)p_handleTitleLabel:(unsigned long long)a0 normalTitle:(id)a1;
- (void)p_addViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
