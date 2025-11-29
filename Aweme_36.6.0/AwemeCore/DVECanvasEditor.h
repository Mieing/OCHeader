@class NSString;
@protocol DVENLEInterfaceProtocol, DVEEditingContextProtocol, DVECoreActionServiceProtocol, DVEPlayerServiceProtocol, IESServiceProvider;

@interface DVECanvasEditor : NSObject <DVECoreActionDelegate, DVECoreCanvasProtocol>

@property (weak, nonatomic) id<DVECoreActionServiceProtocol> actionService;
@property (weak, nonatomic) id<DVENLEInterfaceProtocol> nle;
@property (weak, nonatomic) id<DVEPlayerServiceProtocol> playerService;
@property (weak, nonatomic) id<DVEEditingContextProtocol> mediaContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long ratio;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) struct CGSize { double width; double height; } originRatioSize;
@property (nonatomic) double maximumScale;
@property (nonatomic) double minimumScale;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;

+ (struct CGSize { double x0; double x1; })fitMaxSizeForResolution:(double)a0 originSize:(struct CGSize { double x0; double x1; })a1;

- (BOOL)hasCropInfoWithSlot:(id)a0;
- (void)saveCanvasSize;
- (void)restoreCanvasSize;
- (void)updateCanvasRatio:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })subViewScaleAspectFit:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })canvasSizeScaleAspectFitInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCanvasRatio:(unsigned long long)a0 inPreviewView:(id)a1 needCommit:(BOOL)a2;
- (void)updateVideoClipTranslation:(struct CGPoint { double x0; double x1; })a0 forSlot:(id)a1 isCommit:(BOOL)a2;
- (void)updateVideoClipScale:(double)a0 forSlot:(id)a1 isCommit:(BOOL)a2;
- (void)updateVideoClipRotation:(double)a0 forSlot:(id)a1 isCommit:(BOOL)a2;
- (struct CGSize { double x0; double x1; })calculateCroppedSizeWithSlot:(id)a0 canvasSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)init;

@end
