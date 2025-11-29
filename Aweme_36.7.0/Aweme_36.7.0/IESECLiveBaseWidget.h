@class NSString, IESECLiveRoomContext;
@protocol IESECLiveRoom, IESECLiveRoomContext;

@interface IESECLiveBaseWidget : NSObject <IESECLiveBaseViewEnvironment, IESECLiveWidget, IESECLiveWidgetRoomAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESECLiveRoom> room;
@property (retain, nonatomic) IESECLiveRoomContext<IESECLiveRoomContext> *roomContext;
@property (nonatomic) BOOL isComponentPreloading;
@property (nonatomic) BOOL isComponentPreloaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)widgetWithRoom:(id)a0 roomContext:(id)a1;

- (BOOL)isCurrentLandscape;
- (void)widgetDidCreate;
- (id)liveRoomRootViewController;
- (id)liveRoomPopupContainerView;
- (id)getCurrentLiveRoomContext;
- (id)initWithRoom:(id)a0 roomContext:(id)a1;
- (void)widgetDidAppear;
- (void)widgetMount;
- (void)widgetUnmount;
- (void)widgetRefresh;
- (void)didShowShopCart:(BOOL)a0;
- (void)didHideShopCart:(BOOL)a0;
- (void)beginHandleAfterEnterRoom;
- (void)endHandleAfterEnterRoom;
- (void)widgetDidDisappear;
- (void)widgetWillAppear;
- (void)widgetWillDisappear;
- (void)widgetOrientationWillChange:(long long)a0;
- (void)widgetOrientationDidChange:(long long)a0;
- (void).cxx_destruct;

@end
