@interface WCVideoRender : NSObject

@property (nonatomic) BOOL isSharedScreenData;
@property (readonly, nonatomic) float defaultFrontDegrees;
@property (nonatomic) float frontDegrees;
@property (readonly, nonatomic) float defaultBackDegrees;
@property (nonatomic) float backDegrees;
@property (readonly, nonatomic) BOOL isRendered;

- (void)renderImage:(char *)a0 Width:(unsigned int)a1 Height:(unsigned int)a2;
- (void)renderImage:(char *)a0 Width:(unsigned int)a1 Height:(unsigned int)a2 FitView:(BOOL)a3;
- (void)changeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)getRenderView;
- (void)cameraFrontMode:(BOOL)a0;
- (void)updateOrientation;
- (BOOL)isTouchInsideViewWithPoint:(struct CGPoint { double x0; double x1; })a0;

@end
