@class AWEECOMIMDynamicCardCommonDiffBorderRadiusView;

@interface AWEECOMIMDynamicCardStackLayoutView : AWEECOMIMDynamicCardBaseElementView

@property (retain, nonatomic) AWEECOMIMDynamicCardCommonDiffBorderRadiusView *bkgView;
@property (nonatomic) struct CGSize { double width; double height; } maxSize;

+ (struct CGSize { double x0; double x1; })sizeWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)checkSupportSubElementViewWithElementModel:(id)a0;
+ (double)heightWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (double)widthWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })childFrame:(id)a0 childElementView:(id)a1 elementModel:(id)a2 maxSize:(struct CGSize { double x0; double x1; })a3;
+ (struct CGSize { double x0; double x1; })stackFillerSizeWithParentModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;

- (void)updateWithElememtModel:(id)a0;
- (double)widthWithElementModel:(id)a0;
- (double)heightWithElementModel:(id)a0;
- (void)layoutChildElement;
- (id)addChildElementViewBkgView;
- (void)addChildElementView:(id)a0 model:(id)a1 top:(double)a2 height:(double)a3;
- (struct CGSize { double x0; double x1; })currentMaxSize;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
