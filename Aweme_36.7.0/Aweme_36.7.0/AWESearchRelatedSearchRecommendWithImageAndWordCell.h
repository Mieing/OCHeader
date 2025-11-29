@class UILabel, UIImageView, UIView;

@interface AWESearchRelatedSearchRecommendWithImageAndWordCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *wordLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *imageMaskView;
@property (nonatomic) long long uiStyle;

- (void)updateWithModel:(id)a0 UIInfoModel:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateUI;

@end
