@class DUXTextTag, UIImageView, UILabel, UIView, AWEGradientView;

@interface AWECoCreatorPostCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *likeIcon;
@property (retain, nonatomic) UILabel *likeCountLabel;
@property (retain, nonatomic) UIView *maskLayerView;
@property (retain, nonatomic) UILabel *awemeCountLabel;
@property (retain, nonatomic) AWEGradientView *bottomGradientView;
@property (retain, nonatomic) DUXTextTag *videoTag;

+ (id)identifier;

- (void)updateWithModel:(id)a0 awemeCount:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureSubviews;

@end
