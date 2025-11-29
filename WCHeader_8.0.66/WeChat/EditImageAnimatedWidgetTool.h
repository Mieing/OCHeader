@protocol EditImageAnimatedDelegate;

@interface EditImageAnimatedWidgetTool : EditImageWidgetTool

@property (weak, nonatomic) id<EditImageAnimatedDelegate> animatedDelegate;
@property (nonatomic) struct CGSize { double width; double height; } editBounds;
@property (nonatomic) BOOL isSticky;

- (id)exportAnimatedLayerWithTimingObject:(id)a0;
- (double)originalScaleFactor;
- (double)maxScaleFactor;
- (double)maxFrameScaleWhileSelect;
- (double)widgetViewBorder;
- (void)subclassLargeTouchFrame;
- (void)subclassReloadFrame;
- (BOOL)needHighQuality;
- (void)setScreenCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)judgeFromDeleteBar:(id)a0;
- (void).cxx_destruct;

@end
