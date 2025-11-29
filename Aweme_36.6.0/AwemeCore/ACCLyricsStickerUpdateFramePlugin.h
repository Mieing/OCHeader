@class NSString, UIView;
@protocol ACCEditStickerProtocol, ACCStickerContainerProtocol, ACCStickerEventFlowProtocol;

@interface ACCLyricsStickerUpdateFramePlugin : NSObject <ACCStickerOverAheadGesturePluginProtocol>

@property (retain, nonatomic) id<ACCEditStickerProtocol> editStickerService;
@property (nonatomic) BOOL disabled;
@property (weak, nonatomic) UIView<ACCStickerContainerProtocol, ACCStickerEventFlowProtocol> *stickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createPlugin;

- (BOOL)featureSupportSticker:(id)a0;
- (void)playerFrameChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stickerContainer:(id)a0 beforeRecognizerGesture:(id)a1;
- (void).cxx_destruct;
- (void)loadPlugin;

@end
