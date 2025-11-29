@class UILabel, YYLabel, AWETaskElasticLayerModel;

@interface AWEAdTaskLiteDescriptionItemView : UIView

@property (nonatomic) double titleWidth;
@property (retain, nonatomic) UILabel *colonLabel;
@property (retain, nonatomic) YYLabel *descriptionLabel;
@property (retain, nonatomic) AWETaskElasticLayerModel *item;

- (void)setUpWithDescriptionItem:(id)a0 titleWidth:(double)a1;
- (void)setDescriptionItemWithUrlTransfer:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
