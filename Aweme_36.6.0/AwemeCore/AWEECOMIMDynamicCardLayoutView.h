@class UIScrollView, UIView, AWEECOMIMDynamicCardCommonDiffBorderRadiusView;

@interface AWEECOMIMDynamicCardLayoutView : AWEECOMIMDynamicCardBaseElementView

@property (retain, nonatomic) AWEECOMIMDynamicCardCommonDiffBorderRadiusView *bkgView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *layerView;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long scrollType;
@property (nonatomic) long long weight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } paddingInserts;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;

+ (struct CGSize { double x0; double x1; })sizeWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (double)heightWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (double)widthWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)checkIfNeedPreCalculateWidth:(id)a0;
+ (double)preCalculateWidth:(id)a0 defaultWidth:(double)a1;

- (void)updateWithElememtModel:(id)a0;
- (double)widthWithElementModel:(id)a0;
- (double)heightWithElementModel:(id)a0;
- (void)layoutChildElement;
- (id)addChildElementViewBkgView;
- (void)addChildElementView:(id)a0 model:(id)a1 top:(double)a2 height:(double)a3;
- (void)addChildElementView:(id)a0 model:(id)a1 left:(double)a2 width:(double)a3 height:(double)a4;
- (void)addChildElementView:(id)a0 model:(id)a1 top:(double)a2 height:(double)a3 width:(double)a4;
- (double)preCalculateWidth:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
