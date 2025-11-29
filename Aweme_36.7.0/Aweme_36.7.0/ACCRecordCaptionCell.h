@class UILabel, CAShapeLayer, ACCRecordCaptionCellViewModel;

@interface ACCRecordCaptionCell : UICollectionViewCell

@property (retain, nonatomic) ACCRecordCaptionCellViewModel *cellViewModel;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) CAShapeLayer *labelMaskLayer;
@property (retain, nonatomic) UILabel *selectedLabel;
@property (retain, nonatomic) CAShapeLayer *selectedLabelMaskLayer;

- (void)updateSelectState:(long long)a0;
- (void)updateSplitRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)bindCellViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)buildView;

@end
