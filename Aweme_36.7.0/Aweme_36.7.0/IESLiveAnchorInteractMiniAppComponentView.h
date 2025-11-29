@class UIView;

@interface IESLiveAnchorInteractMiniAppComponentView : UIView <IESLiveAnchorInteractMiniAppLayoutService>

@property (retain, nonatomic) UIView *componentView;
@property (nonatomic) double canvasMaximumWidth;
@property (nonatomic) double canvasMaximumHeight;
@property (nonatomic) double dragRectRight;
@property (nonatomic) double dragRectBottom;
@property (nonatomic) struct CGPoint { double x; double y; } gestureBeginPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } componentBeginRect;
@property (copy, nonatomic) id /* block */ positionChangedCallback;
@property (nonatomic) long long state;
@property (nonatomic) double dragRectTop;
@property (nonatomic) double dragRectLeft;

- (void)dragViewMoved:(id)a0;
- (void)dealWithComponentPositionChanged;
- (void)addCanvasView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGSize { double x0; double x1; })getMaximumCanvasFrameSize;
- (void)updateCanvasWithWidth:(double)a0 height:(double)a1 completion:(id /* block */)a2;
- (void)listenComponentFramePositionChanged:(id /* block */)a0;
- (id)initWithDragableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)destroy;
- (void)hide;
- (void)show;

@end
