@class NSString;
@protocol DVEBrushPreviewEditPluginDelegate;

@interface DVEBrushPreviewEditPlugin : NSObject <DVEPreviewGestureListenerProtocol, DVEBrushEditPluginProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double scale;
@property (nonatomic) double previousScale;
@property (weak, nonatomic) id<DVEBrushPreviewEditPluginDelegate> delegate;

- (id)initWithVCContext:(id)a0;
- (void)pluginWillShowOnView:(id)a0;
- (void)pluginWillDismiss;
- (void)pluginWillHide:(BOOL)a0;
- (void)pluginUpdateIfNeedWithPreviewSize:(struct CGSize { double x0; double x1; })a0;
- (id)gestureListener;
- (void)willResponseGesture:(id)a0 withPreviewManager:(id)a1;
- (void)handleDoublePanGesture:(id)a0;
- (void)handlePinGesture:(id)a0;
- (BOOL)onGesturePan:(id)a0 withPreviewManager:(id)a1;
- (BOOL)onDoubleGesturePan:(id)a0 withPreviewManager:(id)a1;
- (BOOL)onGestureScale:(id)a0 withPreviewManager:(id)a1;
- (void)didBeginTouchAtPoint:(id)a0 touchesCount:(id)a1;
- (void)didMoveTouchToPoint:(id)a0 touchesCount:(id)a1;
- (void)didEndTouchAtPoint:(id)a0 touchesCount:(id)a1;
- (void)didCancelTouchAtPoint:(id)a0 touchesCount:(id)a1;
- (void).cxx_destruct;
- (id)pluginView;
- (void)handlePanGesture:(id)a0;

@end
