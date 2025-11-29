@class UILabel, UIImageView, AWERVExposedMixInfoPlayCoverView;

@interface AWERVMixInfoExposedTitleAndCoverCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *mixVideoCoverView;
@property (retain, nonatomic) AWERVExposedMixInfoPlayCoverView *maskCoverView;

- (void)updateWithModel:(id)a0 pageContext:(id)a1;
- (id)updateTitleAttributedStringWithIsPlayIng:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
