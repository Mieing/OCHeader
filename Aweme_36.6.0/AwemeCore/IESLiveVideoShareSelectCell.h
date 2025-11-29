@class IESLiveVideoShareSelectCellConfig, IESLiveImageView, UILabel, UIView;

@interface IESLiveVideoShareSelectCell : UICollectionViewCell

@property (retain, nonatomic) IESLiveVideoShareSelectCellConfig *config;
@property (retain, nonatomic) IESLiveImageView *likeIcon;
@property (retain, nonatomic) IESLiveImageView *coverImageView;
@property (retain, nonatomic) UILabel *likeCountLabel;
@property (retain, nonatomic) IESLiveImageView *selectIcon;
@property (retain, nonatomic) UIView *blackMaskView;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL hideSelectionStyle;

- (void)loadCoverImage;
- (id)transformLikeCount:(long long)a0;
- (void)setUpBlackMask;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
