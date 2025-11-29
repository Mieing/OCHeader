@class NSString, UIView;
@protocol CGCloudPlayer, CGItem;

@interface CGPlayView : UIView <CGCloudPlayerMessage>

@property (retain, nonatomic) UIView *touchGestureView;
@property (retain, nonatomic) UIView *displayView;
@property (retain, nonatomic) UIView *matchRoomView;
@property (weak, nonatomic) id<CGItem> item;
@property (weak, nonatomic) id<CGCloudPlayer> cloudPlayer;
@property unsigned long long currentOrientation;
@property (nonatomic) BOOL useRTCRenderOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateOrientation:(unsigned long long)a0;
- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)updateRenderMode;
- (void)item:(id)a0 cloudPlayer:(id)a1 onFirstRemoteVideoFrameDecoded:(id)a2 uid:(id)a3;
- (void)item:(id)a0 cloudPlayer:(id)a1 onRemoteVideoSizeChanged:(id)a2 uid:(id)a3;
- (void)setDisableGesture:(id)a0;
- (void)layoutDisplayView;
- (void)layoutWithModeFit;
- (void)layoutWithModeFill;
- (void)dddMatchRoomView:(id)a0;
- (void)removeMatchRoomView;
- (void).cxx_destruct;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupView;

@end
