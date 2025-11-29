@class UIView;
@protocol CGCloudPlayer, CGItem;

@interface CGPlayViewOld : UIView

@property (retain, nonatomic) UIView *touchGestureView;
@property (retain, nonatomic) UIView *displayView;
@property (retain, nonatomic) UIView *matchRoomView;
@property (nonatomic) struct CGSize { double width; double height; } rtcVideoFrameSize;
@property (nonatomic) double renderFrameRatio;
@property (nonatomic) BOOL isConstantRatio;
@property (nonatomic) long long gameOriginalOrientation;
@property (weak, nonatomic) id<CGItem> item;
@property (weak, nonatomic) id<CGCloudPlayer> cloudPlayer;

- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)layoutCanvasSizeWithRTCFrameInfo:(id)a0;
- (void)dddMatchRoomView:(id)a0;
- (void)removeMatchRoomView;
- (void)updateCanvasSizeWithUIInterfaceOrientation:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupView;

@end
