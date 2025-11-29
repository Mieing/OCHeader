@class NSString, ACCStickerDeleteView, UIView;
@protocol ACCStickerEventFlowProtocol, ACCStickerDeletePluginDelegate, ACCStickerContainerProtocol;

@interface ACCStickerDeletePlugin : NSObject <ACCStickerGestureResponsiblePluginProtocol>

@property (retain, nonatomic) ACCStickerDeleteView *deleteView;
@property (nonatomic) BOOL isInDeleting;
@property (weak, nonatomic) id<ACCStickerDeletePluginDelegate> delegate;
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
- (long long)implementedContainerFeature;
- (void).cxx_destruct;
- (void)loadPlugin;
- (id)pluginView;

@end
