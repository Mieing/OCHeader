@class UILabel, AWEFavoriteFolderBaseInfoModel, UIView;

@interface AWEFollowedFavoriteFileNoVisibleCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) AWEFavoriteFolderBaseInfoModel *collectionModel;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)goToFavoriteVideoViewController;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
