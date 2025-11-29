@class UIImageView, UILabel, UIView, AWEGradientView;

@interface AWEFavoriteFileEntranceCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *fileCoverImageView;
@property (retain, nonatomic) UIImageView *fileImageView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *customMaskView;
@property (retain, nonatomic) UILabel *fileLabel;
@property (nonatomic) BOOL isProfileExploreStyle;
@property (retain, nonatomic) AWEGradientView *maskLayer;

+ (id)identifier;

- (void)configWithCoverUrl:(id)a0 withFileNumber:(id)a1 isProfileExploreStyle:(BOOL)a2;
- (void)refreshCoverImageWithProfileExploreStyle;
- (void)refreshUIWithProfileExploreStyle;
- (void)configWithCoverUrl:(id)a0 withFileNumber:(id)a1;
- (void)configWithNoFile;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
