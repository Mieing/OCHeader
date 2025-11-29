@class AWESearchArticleFilterDetail, UIImageView, UILabel, UIView;

@interface AWESearchArticleFilterDetailView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWESearchArticleFilterDetail *detail;

- (void)updateWithDetail:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
