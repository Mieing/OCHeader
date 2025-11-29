@interface AWEAwemeBaseVRPlayer : AWEAwemeBaseVideoPlayer

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } beforeEnterPicoVRPageFrame;

+ (long long)defaultMediaTypeInContainer:(id)a0;
+ (BOOL)shouldHandleModel:(id)a0 inContainer:(id)a1;
+ (long long)mediaTypeForModel:(id)a0 inContainer:(id)a1;
+ (id)mediaPlayerForModel:(id)a0 inContainer:(id)a1;

- (void)configBeforEnterToPicoVRPage;
- (void)configAfterQuitFromPicoVRPage:(id)a0;
- (BOOL)shouldRemoveConstraintAfterExitVRPage;

@end
