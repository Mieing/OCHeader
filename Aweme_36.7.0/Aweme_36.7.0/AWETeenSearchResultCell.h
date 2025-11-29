@class AWEBillboardLabel, AWEAwemeModel, UIImageView, AWETeenHotSpotListLabel, UILabel, UIView, AWEGradientView;

@interface AWETeenSearchResultCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *likeImageView;
@property (retain, nonatomic) UILabel *likeNumberLabel;
@property (retain, nonatomic) UIView *likeContainerView;
@property (retain, nonatomic) AWETeenHotSpotListLabel *hotSpotLabel;
@property (retain, nonatomic) AWEGradientView *bottomGradientMaskView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) AWEBillboardLabel *authorNameLabel;
@property (retain, nonatomic) AWEAwemeModel *model;

+ (id)cellIdentifier;
+ (double)cellHeight;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
