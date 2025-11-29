@class UILabel, AWEDetailMVMaterialSlotsCellModel;

@interface AWEDetailMVMaterialSlotsCell : UICollectionViewCell

@property (retain, nonatomic) AWEDetailMVMaterialSlotsCellModel *cellModel;
@property (retain, nonatomic) UILabel *timeLabel;

- (void)configCellModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
