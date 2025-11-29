@interface MinimizationUtil : NSObject

+ (id)allTaskBizNameDefines;
+ (void)minimizationTapic;
+ (void)minimizationTapic:(BOOL)a0;
+ (void)minimizationVoiceTic;
+ (id)addGradientLayer:(id)a0 Color:(id)a1;
+ (id)addShadowLayer:(id)a0 WithPath:(id)a1 ShadowRadius:(double)a2 ShadowOffset:(struct CGSize { double x0; double x1; })a3 ShadowColor:(id)a4;
+ (id)getShadowMaskPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 WithPath:(id)a1 ShadowRadius:(double)a2 ShadowOffset:(struct CGSize { double x0; double x1; })a3;
+ (void)animateShadowLayer:(id)a0 ToView:(id)a1 ToPath:(id)a2 Duration:(double)a3;
+ (void)resetShadowLayer:(id)a0 ToView:(id)a1 ToPath:(id)a2;
+ (id)genShadowView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 FinalPath:(id)a1;
+ (void)animateSubLayer:(id)a0 ToPath:(id)a1 Duration:(double)a2;
+ (void)animateSubLayer:(id)a0 CornerRadius:(double)a1 Duration:(double)a2;
+ (id)genInnerTaskKey:(id)a0 TaskBizKey:(id)a1;
+ (id)genColorWithImage:(id)a0;
+ (id)minimizeTaskDocumentDir;
+ (id)minimizeNormalTaskListPath;
+ (id)minimizeAdsorbFloatingViewInfoPath;
+ (BOOL)hasOuterContentTask:(id)a0;
+ (BOOL)isAudioStateContentTask:(id)a0;
+ (BOOL)isStateTask:(id)a0;
+ (BOOL)isMultiOuterContentTask:(id)a0;
+ (BOOL)hasStoredTask:(id)a0 taskKey:(id)a1;
+ (id)findAllInstanceOfClass:(Class)a0 inView:(id)a1;

@end
