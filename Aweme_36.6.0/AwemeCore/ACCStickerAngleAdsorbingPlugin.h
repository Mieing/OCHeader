@class UIView, NSString, CAShapeLayer;
@protocol ACCStickerContainerProtocol, ACCStickerEventFlowProtocol;

@interface ACCStickerAngleAdsorbingPlugin : NSObject <ACCStickerGestureResponsiblePluginProtocol>

@property (retain, nonatomic) CAShapeLayer *centerHorizontalDashLayer;
@property (nonatomic) double rotationInAdsorbing;
@property (retain, nonatomic) UIView *pluginContentView;
@property (nonatomic) BOOL disabled;
@property (weak, nonatomic) UIView<ACCStickerContainerProtocol, ACCStickerEventFlowProtocol> *stickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createPlugin;

- (BOOL)featureSupportSticker:(id)a0;
- (void)playerFrameChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didChangeLocationWithOperationStickerView:(id)a0;
- (void)sticker:(id)a0 willHandleGesture:(id)a1;
- (void)sticker:(id)a0 didHandleGesture:(id)a1;
- (void)sticker:(id)a0 didEndGesture:(id)a1;
- (struct CGPoint { double x0; double x1; })anchorDiffWithStickerView:(id)a0;
- (long long)implementedContainerFeature;
- (void)generateLightImpactFeedBack;
- (void)hideAngleHelperDashLine;
- (void)updateHorizontalWithStickerView:(id)a0;
- (void)showAngleHelperDashLine;
- (void)interceptStickerView:(id)a0 toAngleAdsorbingWithGesture:(id)a1;
- (void).cxx_destruct;
- (void)loadPlugin;
- (id)init;
- (id)pluginView;

@end
