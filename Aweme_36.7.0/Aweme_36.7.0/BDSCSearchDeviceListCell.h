@class UIView, BDSCImageView, UIImage, UIImageView, BDSCSearchDeviceListCellModel, CAShapeLayer, BDByteScreenRecommendTagContainer, UILabel, BDSCBackgroundView;

@interface BDSCSearchDeviceListCell : BDSCSearchDeviceListBaseCell

@property (retain, nonatomic) BDSCSearchDeviceListCellModel *model;
@property (retain, nonatomic) UIImageView *tvIcon;
@property (retain, nonatomic) UILabel *deviceNameLabel;
@property (retain, nonatomic) BDSCImageView *selectedMark;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UIImage *normalTvImage;
@property (retain, nonatomic) BDSCBackgroundView *backView;
@property (retain, nonatomic) BDByteScreenRecommendTagContainer *tagContainer;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (nonatomic) unsigned long long rectCorner;
@property (nonatomic) struct CGSize { double width; double height; } maskSize;

- (void)configWithCellModel:(id)a0;
- (void)buildViews;
- (void)updateSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)configMaskLayerCorner:(unsigned long long)a0;
- (void)updateTvIcon;
- (void)layoutSublayersOfLayer:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)buildConstraints;

@end
