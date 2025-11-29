@class AWEECOMIMDynamicCardCommonDiffBorderRadiusView, UIImageView, UILabel, BDPCDDynamicCardDashedLineView;

@interface AWEECOMIMDynamicCardBusinessTagView : AWEECOMIMDynamicCardBaseElementView

@property (retain, nonatomic) UIImageView *prefixImageView;
@property (retain, nonatomic) UILabel *prefixLabel;
@property (retain, nonatomic) UIImageView *mainImageView;
@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) BDPCDDynamicCardDashedLineView *midLine;
@property (retain, nonatomic) AWEECOMIMDynamicCardCommonDiffBorderRadiusView *bkgView;

+ (struct CGSize { double x0; double x1; })sizeWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)checkSupportSubElementViewWithElementModel:(id)a0;
+ (double)heightWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (double)bkgViewWidthWithModel:(id)a0;
+ (double)bkgViewHeightWithModel:(id)a0;
+ (BOOL)canShowMidline:(id)a0;
+ (double)widthWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;

- (void)updateWithElememtModel:(id)a0;
- (double)widthWithElementModel:(id)a0;
- (double)heightWithElementModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
