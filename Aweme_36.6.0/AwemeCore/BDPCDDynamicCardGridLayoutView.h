@class AWEECOMIMDynamicCardCommonDiffBorderRadiusView;

@interface BDPCDDynamicCardGridLayoutView : AWEECOMIMDynamicCardBaseElementView

@property (retain, nonatomic) AWEECOMIMDynamicCardCommonDiffBorderRadiusView *bkgView;

+ (struct CGSize { double x0; double x1; })sizeWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)checkSupportSubElementViewWithElementModel:(id)a0;
+ (double)heightWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (double)widthWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (double)bkgViewWidthWithElementModel:(id)a0 width:(double)a1;
+ (long long)itemWidthNumWithElementModel:(id)a0;
+ (double)childrenHeightWithElementModel:(id)a0 width:(double)a1;
+ (long long)itemHeightNumWithElementModel:(id)a0;
+ (double)bkgViewHeightWithElementModel:(id)a0 width:(double)a1;
+ (double)childrenWidthWithElementModel:(id)a0 width:(double)a1;

- (void)updateWithElememtModel:(id)a0;
- (double)widthWithElementModel:(id)a0;
- (double)heightWithElementModel:(id)a0;
- (void)layoutChildElement;
- (id)addChildElementViewBkgView;
- (BOOL)canAddChildremWithElementModel:(id)a0 lastSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })childrenRectWithElementModel:(id)a0 lastSize:(struct CGSize { double x0; double x1; })a1;
- (void)addChildElementView:(id)a0 model:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)bkgViewWidthWithElementModel:(id)a0;
- (double)bkgViewHeightWithElementModel:(id)a0;
- (long long)lastItemIdxWithElementModel:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
