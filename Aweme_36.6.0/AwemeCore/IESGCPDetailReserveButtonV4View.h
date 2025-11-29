@class NSMutableArray, IESGCPDetailUniversalButtonContainerView;

@interface IESGCPDetailReserveButtonV4View : IESGCPDetailBaseView

@property (retain, nonatomic) IESGCPDetailUniversalButtonContainerView *reserveButton;
@property (retain, nonatomic) NSMutableArray *subscriberList;

- (void)bindViewModel:(id)a0;
- (void)makeViewTrackNode;
- (void)didSetGameCPDIContext;
- (void)registerEventSubscriber;
- (int)getDetailReserveButtonStatus;
- (void)unregisterEventSubscriber;
- (void)reservedStatusDidChanged:(unsigned long long)a0;
- (void)gameReserveDidSuccess;
- (void)gameCancelReserveDidSuccess;
- (void)handleCannelReserveGameEvent;
- (void)handleReserveGameEventWithShowLoadingInView:(id)a0;
- (void)handleReserveButtonClick;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupViews;

@end
