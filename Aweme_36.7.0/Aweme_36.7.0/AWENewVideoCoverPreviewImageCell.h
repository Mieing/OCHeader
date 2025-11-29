@class AWEDetailCellTagLabel, UIImageView, AWEAwemeModel, UIView;

@interface AWENewVideoCoverPreviewImageCell : UICollectionViewCell

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEDetailCellTagLabel *topLeftTagLabel;
@property (retain, nonatomic) UIView *bgMaskView;

- (void)configWithModel:(id)a0;
- (void)updateCoverWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
