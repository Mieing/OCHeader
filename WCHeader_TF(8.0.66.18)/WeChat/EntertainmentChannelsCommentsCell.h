@class UILabel, UIView, WCFinderHeadImageView;

@interface EntertainmentChannelsCommentsCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) WCFinderHeadImageView *avatorImageView;
@property (retain, nonatomic) UIView *avatorImageBorderView;

+ (id)cellIdentifier;
+ (struct CGSize { double x0; double x1; })sizeWithComment:(id)a0 maxWidth:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)updateWithBullet:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
