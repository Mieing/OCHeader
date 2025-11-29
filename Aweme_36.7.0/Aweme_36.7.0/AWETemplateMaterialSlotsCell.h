@class UIImageView, UILabel, AWETemplateMaterialSlotsCellModel;

@interface AWETemplateMaterialSlotsCell : UICollectionViewCell

@property (retain, nonatomic) AWETemplateMaterialSlotsCellModel *cellModel;
@property (retain, nonatomic) UIImageView *plusIconView;
@property (retain, nonatomic) UILabel *timeLabel;

- (void)configCellModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
