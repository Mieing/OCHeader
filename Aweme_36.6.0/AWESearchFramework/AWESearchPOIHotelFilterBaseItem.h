@class AWEDoubleColumnSearchMerchandiseFilterStyleModel, UIImageView, CAShapeLayer, UILabel;

@interface AWESearchPOIHotelFilterBaseItem : UIView

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (nonatomic) BOOL selectedState;
@property (nonatomic) BOOL isTwoLine;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterStyleModel *styleModel;

- (void)setMainText:(id)a0 subText:(id)a1 icon:(id)a2;
- (void)addMaskLayerIfNeed;
- (void)addBorderLayerIfNeed;
- (void)updateUIWithSelectedState:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateUI;
- (void)updateFont;
- (void)updateBorderColor;

@end
