@class NSString, UIView;
@protocol ACCStickerContainerProtocol, ACCStickerEventFlowProtocol;

@interface AWENewVideoCoverSafeAreaView : UIView <ACCStickerSafeAreaProtocol>

@property (nonatomic) BOOL fastPanning;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } previousTransform;
@property (nonatomic) struct CGPoint { double x; double y; } previousCenter;
@property (nonatomic) double previousScale;
@property (nonatomic) double currentGestureScale;
@property (nonatomic) struct CGSize { double width; double height; } mediaActualSize;
@property (nonatomic) BOOL disabled;
@property (weak, nonatomic) UIView<ACCStickerContainerProtocol, ACCStickerEventFlowProtocol> *stickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createPlugin;

- (BOOL)featureSupportSticker:(id)a0;
- (void)playerFrameChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sticker:(id)a0 willHandleGesture:(id)a1;
- (void)sticker:(id)a0 didHandleGesture:(id)a1;
- (void)sticker:(id)a0 didEndGesture:(id)a1;
- (struct CGPoint { double x0; double x1; })fixOperatingStickerView:(id)a0 withWillChangeLocationWithCenter:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })fixStickerView:(id)a0 withWillChangeLocationWithCenter:(struct CGPoint { double x0; double x1; })a1;
- (long long)implementedContainerFeature;
- (BOOL)shouldLimitStikerInMediaView:(id)a0;
- (BOOL)isStickerCenterOutMediaArea:(id)a0;
- (struct CGPoint { double x0; double x1; })fixMainStickerView:(id)a0 withWillChangeLocationWithCenter:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)loadPlugin;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)pluginView;

@end
