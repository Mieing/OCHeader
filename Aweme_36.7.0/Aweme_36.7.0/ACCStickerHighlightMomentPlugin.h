@class NSString, UIView;
@protocol ACCStickerContainerProtocol, ACCStickerEventFlowProtocol;

@interface ACCStickerHighlightMomentPlugin : NSObject <ACCStickerGestureResponsiblePluginProtocol>

@property (nonatomic) struct CGPoint { double x; double y; } backupCenter;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } backupTransform;
@property (nonatomic) BOOL invalidAction;
@property (nonatomic) BOOL hasBackup;
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
- (BOOL)isPolygon:(id)a0 intersectWithPolygon:(id)a1;
- (void)resetStickerView:(id)a0;
- (void).cxx_destruct;
- (void)loadPlugin;

@end
