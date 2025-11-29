@class NSString, UIView;
@protocol ACCStickerContainerProtocol, ACCStickerEventFlowProtocol;

@interface ACCStickerAdsorbingView : UIView <ACCStickerGestureResponsiblePluginProtocol, ACCStickerCoordinatesModifiabilityProtocol>

@property (retain, nonatomic) UIView *centerVerticalGuideLine;
@property (retain, nonatomic) UIView *centerHorizontalGuideLine;
@property (nonatomic) BOOL fastPanning;
@property (nonatomic) BOOL verticalAdsorbed;
@property (nonatomic) BOOL horizontalAdsorbed;
@property (nonatomic) long long guideLineState;
@property (nonatomic) BOOL enableNewLayout;
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
- (struct CGPoint { double x0; double x1; })fixOperatingStickerView:(id)a0 withWillChangeLocationWithCenter:(struct CGPoint { double x0; double x1; })a1;
- (id)createLine;
- (struct CGPoint { double x0; double x1; })anchorDiffWithStickerView:(id)a0;
- (void)refactorUpdateWithPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 playerPreviewView:(id)a1;
- (void)updateGuideLineWithState:(long long)a0 animated:(BOOL)a1;
- (void)checkAdsorbingStateWithView:(id)a0;
- (long long)implementedContainerFeature;
- (void).cxx_destruct;
- (void)loadPlugin;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)pluginView;

@end
