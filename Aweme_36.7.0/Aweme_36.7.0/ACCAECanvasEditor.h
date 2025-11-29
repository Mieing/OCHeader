@class NSString;
@protocol AWEEditKit, AEKMegaEditor, DVENLEInterfaceProtocol, DVEEditingContextProtocol, DVECoreActionServiceProtocol, IESServiceProvider;

@interface ACCAECanvasEditor : NSObject <DVECoreCanvasProtocol>

@property (weak, nonatomic) id<AWEEditKit> editKit;
@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (weak, nonatomic) id<DVECoreActionServiceProtocol> actionService;
@property (weak, nonatomic) id<DVENLEInterfaceProtocol> nle;
@property (weak, nonatomic) id<DVEEditingContextProtocol> mediaContext;
@property (nonatomic) double prevDoneRotation;
@property (nonatomic) unsigned long long ratio;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) struct CGSize { double width; double height; } originRatioSize;
@property (nonatomic) double maximumScale;
@property (nonatomic) double minimumScale;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (struct CGSize { double x0; double x1; })fitMaxSizeForResolution:(double)a0 originSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)init;

@end
