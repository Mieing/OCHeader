@class RTVVoipSession, NSString, UITapGestureRecognizer, UIImageView, CAShapeLayer, RTVVoipTracker, RTVFinishForwardModel, UILabel;
@protocol RTVStateRecorder, RTVXRWidgetDelegate, RTVXRControllerInjector, RTVXRRouterInterface;

@interface RTVFinishForwardLiveWidget : UIView <RTVXRWidget>

@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVXRRouterInterface> router;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (readonly, weak, nonatomic) RTVVoipSession *session;
@property (readonly, weak, nonatomic) RTVFinishForwardModel *finishForwardModel;
@property (nonatomic) BOOL needOpenLiveRoom;
@property (retain, nonatomic) RTVVoipTracker *voipTracker;
@property (readonly, weak, nonatomic) id<RTVStateRecorder> stateRecorder;
@property (nonatomic) double topDragMargin;
@property (nonatomic) double bottomDragMargin;
@property (weak, nonatomic) id<RTVXRWidgetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__handleTapGesture:(id)a0;
- (void)renderModel:(id)a0;
- (void)__configComponents;
- (void)flowerFloatIconPan:(id)a0;
- (double)preferredOrignY;
- (void)containerDidDismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })preferredSize;

@end
