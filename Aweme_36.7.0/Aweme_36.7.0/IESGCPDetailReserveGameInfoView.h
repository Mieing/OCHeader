@class IESGCPImageButton, UIImageView, UILabel, UIView, IESGCPTagsView;

@interface IESGCPDetailReserveGameInfoView : IESGCPDetailBaseView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *customContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESGCPTagsView *tagsView;
@property (retain, nonatomic) IESGCPImageButton *subtitleLabel;

- (void)bindViewModel:(id)a0;
- (void)layoutWithGameInfoThemeConfig:(id)a0;
- (void)subTitleLabelDidClick:(id)a0;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setupViews;

@end
