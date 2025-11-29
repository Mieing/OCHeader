@class AWEECOMIMDynamicCardCommonDiffBorderRadiusView, BDPCDDynamicCardPlaceHolderSuffixContentModel, UIImageView, UIButton, YYLabel;

@interface AWEECOMIMDynamicCardPlaceHolderSuffixContentView : UIView

@property (retain, nonatomic) AWEECOMIMDynamicCardCommonDiffBorderRadiusView *bkgView;
@property (retain, nonatomic) BDPCDDynamicCardPlaceHolderSuffixContentModel *suffixContentModel;
@property (retain, nonatomic) YYLabel *label;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIButton *tapButton;
@property (copy, nonatomic) id /* block */ clickActionBlock;

+ (id)getNoActionAttributedStringWithPlaceHolderTextModel:(id)a0;
+ (id)getTextColorWithPlaceHolderTextModel:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeWithPlaceHolderTextModel:(id)a0;

- (void)onTapView;
- (void)updateViewWithPlaceHolderTextModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
