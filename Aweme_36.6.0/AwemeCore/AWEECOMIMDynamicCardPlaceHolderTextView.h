@class AWEECOMIMDynamicCardPlaceHolderSuffixContentView, YYLabel, AWEECOMIMDynamicCardCommonDiffBorderRadiusView;

@interface AWEECOMIMDynamicCardPlaceHolderTextView : AWEECOMIMDynamicCardBaseElementView

@property (retain, nonatomic) AWEECOMIMDynamicCardCommonDiffBorderRadiusView *bkgView;
@property (retain) AWEECOMIMDynamicCardPlaceHolderSuffixContentView *suffixContentView;
@property (retain, nonatomic) YYLabel *richLabel;

+ (struct CGSize { double x0; double x1; })sizeWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)checkSupportSubElementViewWithElementModel:(id)a0;
+ (double)heightWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (double)widthWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)enableSuffixView;
+ (id)textFontWithModel:(id)a0;
+ (id)displayAttributeStringForCalculateWithModel:(id)a0;
+ (struct CGSize { double x0; double x1; })textSizeWithWithModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;

- (void)updateWithElememtModel:(id)a0;
- (double)widthWithElementModel:(id)a0;
- (double)heightWithElementModel:(id)a0;
- (id)clickableResource;
- (BOOL)hasChildClickableResource;
- (struct CGSize { double x0; double x1; })textSizeWithWithModel:(id)a0;
- (id)displayAttributeStringWithModel:(id)a0;
- (id)truncatedAttributedStringWithAttributedString:(id)a0 maxWidth:(double)a1 suffixViewWidth:(double)a2 placeHolderTextModel:(id)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
