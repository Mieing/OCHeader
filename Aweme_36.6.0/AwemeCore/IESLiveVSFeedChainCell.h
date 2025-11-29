@class UIImageView, UILabel, IESLiveVSFeedChainCellModel;

@interface IESLiveVSFeedChainCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UIImageView *officialTagView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *tagImageView;
@property (retain, nonatomic) IESLiveVSFeedChainCellModel *cellModel;

- (void)refreshOfficialTag;
- (double)widthForOfficialTag;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
