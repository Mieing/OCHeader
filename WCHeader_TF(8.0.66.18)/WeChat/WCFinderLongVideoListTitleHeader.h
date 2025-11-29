@class WCFinderLongVideoListTitleHeaderConfig, UILabel, MMUIButton, UIView;

@interface WCFinderLongVideoListTitleHeader : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *sepLine;
@property (retain, nonatomic) MMUIButton *rightArrowBtn;
@property (nonatomic) struct CGSize { double width; double height; } layoutSize;
@property (retain, nonatomic) WCFinderLongVideoListTitleHeaderConfig *config;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)updateWithConfig:(id)a0;
- (void)setupUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void).cxx_destruct;

@end
