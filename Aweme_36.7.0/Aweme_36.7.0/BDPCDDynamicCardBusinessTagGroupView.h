@class AWEECOMIMDynamicCardCommonDiffBorderRadiusView;

@interface BDPCDDynamicCardBusinessTagGroupView : AWEECOMIMDynamicCardBaseElementView

@property (retain, nonatomic) AWEECOMIMDynamicCardCommonDiffBorderRadiusView *bkgView;

+ (struct CGSize { double x0; double x1; })sizeWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)checkSupportSubElementViewWithElementModel:(id)a0;
+ (double)heightWithElementModel:(id)a0;
+ (double)widthWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;

- (void)updateWithElememtModel:(id)a0;
- (double)widthWithElementModel:(id)a0;
- (double)heightWithElementModel:(id)a0;
- (void)layoutChildElement;
- (id)addChildElementViewBkgView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
