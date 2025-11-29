@class IESECUserTrackerPageContext, NSString;

@interface IESECLiveUserTrackerWidget : IESECLiveBaseWidget <IESECLiveUserTrackerService>

@property (nonatomic) BOOL appeared;
@property (nonatomic) BOOL shopCartShowed;
@property (nonatomic) BOOL didEnter;
@property (retain, nonatomic) IESECUserTrackerPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRoom:(id)a0 roomContext:(id)a1;
- (void)widgetDidAppear;
- (void)widgetUnmount;
- (void)didShowShopCart:(BOOL)a0;
- (void)didHideShopCart:(BOOL)a0;
- (void)widgetDidDisappear;
- (void)postAction:(id)a0 type:(long long)a1 atPage:(id)a2;
- (void)enterECRoomAndCallUserTracker;
- (void)leaveECRoomAndCallUserTracker;
- (void)addLiveRoomInfoToContext;
- (void).cxx_destruct;

@end
