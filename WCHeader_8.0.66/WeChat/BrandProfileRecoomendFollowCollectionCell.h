@class MMBrandHeadImageView, MMUIImageView, UILabel, UIView;

@interface BrandProfileRecoomendFollowCollectionCell : UICollectionViewCell

@property (retain, nonatomic) MMBrandHeadImageView *avatarView;
@property (retain, nonatomic) UIView *nickNameContentView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) MMUIImageView *certTagView;
@property (retain, nonatomic) UIView *highlightedView;

+ (double)cellHeight;

- (void)updateWithItem:(id)a0;
- (void)layoutSubviews;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
