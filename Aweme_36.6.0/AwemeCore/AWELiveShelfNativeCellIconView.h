@class UIImageView, LOTAnimationView, AWELiveShelfNativeCellShapeLayerView, UILabel, AWEGradientView;

@interface AWELiveShelfNativeCellIconView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) AWELiveShelfNativeCellShapeLayerView *numberLabelBackView;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UIImageView *tagImageView;
@property (retain, nonatomic) AWEGradientView *explainingContainerView;
@property (retain, nonatomic) UILabel *explainingLabel;
@property (retain, nonatomic) LOTAnimationView *explainingImageView;
@property (retain, nonatomic) UILabel *statusMaskView;
@property (copy, nonatomic) id /* block */ imageTrackBlock;

- (void)setupWithNumber:(id)a0 iconUrlList:(id)a1 isExplaining:(BOOL)a2 statusStr:(id)a3;
- (void)setupImageTagWithURL:(id)a0 tagImageType:(long long)a1 fontColor:(id)a2 backgroundColor:(id)a3;
- (id)convertToColor:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
