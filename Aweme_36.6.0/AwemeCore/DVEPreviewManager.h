@class NSMapTable, NSString, UIPinchGestureRecognizer, DVEPreviewContainerView, UIPanGestureRecognizer;
@protocol IESServiceProvider;

@interface DVEPreviewManager : NSObject <DVEPreviewContainerViewDelegate, UIGestureRecognizerDelegate, DVEPreviewManagerProtocol>

@property (retain, nonatomic) DVEPreviewContainerView *containerView;
@property (retain, nonatomic) NSMapTable *pluginMapLayers;
@property (retain, nonatomic) NSMapTable *disablePlugins;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *doublePanGesture;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long editType;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;

- (id)previewContainerView;
- (void)dismissPlugin:(id)a0;
- (id)pluginMapLayersLocateContainPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)disablePluginWithTypes:(id)a0;
- (void)bringPluginToFront:(id)a0;
- (void)updatePreviewPluginIfNeed;
- (void)didBeginTouchAtPoint:(struct CGPoint { double x0; double x1; })a0 touchesCount:(unsigned long long)a1;
- (void)didMoveTouchToPoint:(struct CGPoint { double x0; double x1; })a0 touchesCount:(unsigned long long)a1;
- (void)didEndTouchAtPoint:(struct CGPoint { double x0; double x1; })a0 touchesCount:(unsigned long long)a1;
- (void)didCancelTouchAtPoint:(struct CGPoint { double x0; double x1; })a0 touchesCount:(unsigned long long)a1;
- (id)hitPreventViewWithPoint:(struct CGPoint { double x0; double x1; })a0 event:(id)a1;
- (void)addPluginToMapTable:(id)a0;
- (void)removePluginFromMapTable:(id)a0;
- (void)dispatchGesturePan:(id)a0;
- (void)dispatchGestureRotate:(id)a0;
- (void)dispatchGestureScale:(id)a0;
- (void)dispatchGestureSingleTap:(id)a0;
- (void)dispatchDoubleGesturePan:(id)a0;
- (void)dispatchGestureDoubleTap:(id)a0;
- (void)dispatchGestureLongPress:(id)a0;
- (id)dispatchPluginsWithGesture:(id)a0 selector:(SEL)a1;
- (void)reArrangeMapTableWithPlugin:(id)a0 insertFront:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithContext:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)showPlugin:(id)a0;
- (void)setupGestures;

@end
