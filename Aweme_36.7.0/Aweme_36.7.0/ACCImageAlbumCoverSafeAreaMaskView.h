@class CALayer, NSString, UIView;
@protocol ACCStickerContainerProtocol, ACCStickerEventFlowProtocol;

@interface ACCImageAlbumCoverSafeAreaMaskView : UIView <ACCStickerGestureResponsiblePluginProtocol>

@property (retain, nonatomic) CALayer *maskLayer1;
@property (retain, nonatomic) CALayer *maskLeyer2;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;
@property (nonatomic) struct CGSize { double width; double height; } aspectRatio;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
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
- (void)updateMaskViews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })safeRect;
- (void).cxx_destruct;
- (void)loadPlugin;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)pluginView;

@end
