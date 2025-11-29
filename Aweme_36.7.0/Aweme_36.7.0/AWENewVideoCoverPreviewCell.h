@class AWEDetailCellTagLabel, UIImageView, AWEAwemeModel, UILabel, UIView;

@interface AWENewVideoCoverPreviewCell : UICollectionViewCell

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *waterfallTitleLabel;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *favoriteImageView;
@property (retain, nonatomic) UIImageView *defaultView;
@property (retain, nonatomic) AWEDetailCellTagLabel *topLeftTagLabel;
@property (retain, nonatomic) UIView *bgMaskView;
@property (nonatomic) BOOL showCreateDate;

- (void)configWithModel:(id)a0;
- (void)updateCoverWithCompletion:(id /* block */)a0;
- (void)updateCoverRadius;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
