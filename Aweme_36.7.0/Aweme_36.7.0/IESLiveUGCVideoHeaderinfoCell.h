@class UILabel, IESLiveUGCVideoHeaderDiffableModel, IESLiveButton;

@interface IESLiveUGCVideoHeaderinfoCell : UICollectionViewCell

@property (retain, nonatomic) IESLiveUGCVideoHeaderDiffableModel *model;
@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) IESLiveButton *changeMVButton;

- (void)configWithModel:(id)a0;
- (void)changeMVButtonClick;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
