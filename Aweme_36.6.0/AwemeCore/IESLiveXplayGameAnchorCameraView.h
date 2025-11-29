@class UIButton;

@interface IESLiveXplayGameAnchorCameraView : UIView

@property (retain, nonatomic) UIButton *zoomButton;
@property (nonatomic) BOOL isInMinStatus;
@property (copy, nonatomic) id /* block */ beganGesture;
@property (copy, nonatomic) id /* block */ endedGesture;
@property (copy, nonatomic) id /* block */ actionZoom;

- (void)addGesture;
- (void)drawUI;
- (void)handleSwipePress:(id)a0;
- (void)handleZoomButtonClickAction;
- (void)changeClearStatus:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStatus:(BOOL)a0;

@end
