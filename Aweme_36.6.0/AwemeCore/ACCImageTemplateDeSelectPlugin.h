@class NSString, NSDictionary, ACCNLEImageTemplateGestureProvider, UIView;
@protocol ACCStickerContainerProtocol, ACCStickerEventFlowProtocol;

@interface ACCImageTemplateDeSelectPlugin : NSObject <ACCStickerGestureResponsiblePluginProtocol>

@property (weak, nonatomic) UIView *handlingStickerView;
@property (nonatomic) struct CGPoint { double x; double y; } lastCenter;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } lastTransform;
@property (retain, nonatomic) NSDictionary *commonTrackParams;
@property (retain, nonatomic) ACCNLEImageTemplateGestureProvider *gestureProvider;
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
- (void)sticker:(id)a0 didEndGesture:(id)a1;
- (void).cxx_destruct;
- (void)loadPlugin;

@end
