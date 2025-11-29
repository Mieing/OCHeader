@class IESGCPDetailReserveButtonContainerView, NSMutableArray, NSString;

@interface IESGCPDetailReserveButtonView : IESGCPDetailBaseView <IESGCPDIContextSubscriber, IESGCPGameDetailReserveStatusActions>

@property (retain, nonatomic) IESGCPDetailReserveButtonContainerView *reserveButtonView;
@property (retain, nonatomic) NSMutableArray *subscriberList;
@property (nonatomic) unsigned long long positionStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)didSetGameCPDIContext;
- (void)registerEventSubscriber;
- (int)getDetailReserveButtonStatus;
- (void)observeAndUpdateButtonThemeConfig;
- (void)unregisterEventSubscriber;
- (void)reservedStatusDidChanged:(unsigned long long)a0;
- (void)gameReserveDidSuccess;
- (void)gameCancelReserveDidSuccess;
- (void)handleCannelReserveGameEvent;
- (unsigned long long)reserveButtonStatusWithIsReserved:(BOOL)a0;
- (void)updateReserveButtonViewReserveStatus:(unsigned long long)a0;
- (void)handleReserveGameEvent;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)setupViews;

@end
