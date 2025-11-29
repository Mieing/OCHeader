@class NSString, IESECSliceXTimer, NSHashTable;

@interface IESECSliceXElementViewUtil : NSObject <IESECSliceXFlexObserver, IESECSliceXTimerListener>

@property (retain, nonatomic) NSHashTable *exposureViews;
@property (retain, nonatomic) IESECSliceXTimer *exposureTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getBorderLayerOfElementView:(id)a0;
+ (id)getCornerRadiusMaskLayerOfElementView:(id)a0;
+ (id)getBGGradientLayerOfElementView:(id)a0;
+ (id)getStorageValueWithElementView:(id)a0 key:(id)a1;
+ (void)setStorageValue:(id)a0 withElementView:(id)a1 key:(id)a2;
+ (BOOL)setupElementView:(id)a0 sliceXStyle:(id)a1;
+ (BOOL)setupElementView:(id)a0 clickAction:(id)a1 longClickAction:(id)a2;
+ (BOOL)elementVerify:(id)a0 sliceXElementView:(id)a1 error:(id *)a2;
+ (Class)getElementViewClassWithType:(id)a0;
+ (id)getElementTypeWithViewClass:(Class)a0;
+ (void)setupElementViewFlex:(id)a0 sliceXStyle:(id)a1;
+ (void)setupElementViewOpacity:(id)a0 sliceXStyle:(id)a1;
+ (void)setupElementViewBackground:(id)a0 sliceXStyle:(id)a1;
+ (void)setupElementViewContentWrapperView:(id)a0 sliceXStyle:(id)a1;
+ (void)setupElementViewHitSlop:(id)a0 sliceXAttrs:(id)a1;
+ (id)utilCenter;
+ (id)createElementViewBgViewIfNeed:(id)a0 sliceXStyle:(id)a1;
+ (void)setupElementViewBGGradient:(id)a0 bgGradientColor:(id)a1;
+ (void)setupElementViewBGImage:(id)a0 bgImageURL:(id)a1;
+ (void)layoutBGImageView:(id)a0;
+ (id)createRoundedCornersPathWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleRadius:(struct IESECSliceXRadius { double x0; double x1; double x2; double x3; })a1;
+ (void)setRotateScaleAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forView:(id)a1;
+ (void)layoutBGGradientLayer:(id)a0;
+ (void)setupElementViewBorder:(id)a0;
+ (void)setupElementViewShadow:(id)a0;
+ (void)setupElementTransformOrigin:(id)a0;
+ (void)setupElementTransform:(id)a0;
+ (void)performTransitionAnimations:(id)a0;
+ (void)performFrameAnimations:(id)a0;
+ (void)longPressAction:(id)a0;
+ (void)initialize;
+ (void)highlight:(id)a0;
+ (void)tapAction:(id)a0;

@end
