@class UIColor, MMWebImageView, UILabel, UIView;

@interface WCFinderNearbyLiveMoreLiveHeaderView : UICollectionViewCell

@property (retain, nonatomic) UIView *verticalLineView;
@property (retain, nonatomic) MMWebImageView *iconImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIColor *textColor;

+ (double)cellHeightWithOtherTopMargin:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithTitle:(id)a0 iconUrl:(id)a1;
- (void)setupUI;
- (void)layoutUI;
- (void).cxx_destruct;

@end
