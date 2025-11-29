@class IESECommerceServiceProvider;

@interface IESECPDPBaseComponent : NSObject

@property (weak, nonatomic) IESECommerceServiceProvider *serviceProvider;

- (void)containerWillLoad;
- (void)loadComponent;
- (void)showPresentAnimation;
- (void)containerDidRender;
- (void)containerWillDismiss;
- (void)animateDismiss;
- (void)beforeShowPresentAnimation;
- (void)containerWillReturnGoodsDetailPage;
- (void)containerWillEnterCommentPage;
- (void)beganGesture:(unsigned long long)a0;
- (void)panWithOffsetY:(double)a0 directionUp:(BOOL)a1;
- (void)handlePanGestureWithPercent:(double)a0;
- (void)endOrCancelGesture:(unsigned long long)a0;
- (void)cancelHalfModePan;
- (void)containerDidSwitchToFull;
- (void)containerDidSwitchToHalf;
- (void)preloadBack;
- (void)packApiBack;
- (void)registerSelfService;
- (void)cancelFullModePan;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
