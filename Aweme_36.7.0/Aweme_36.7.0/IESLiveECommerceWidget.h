@class NSString;
@protocol IESECLiveRoom, IESECLiveRoomContext;

@interface IESLiveECommerceWidget : NSObject <IESECLiveWidget, IESECLiveWidgetRoomAction>

@property (retain, nonatomic) id<IESECLiveRoom> room;
@property (retain, nonatomic) id<IESECLiveRoomContext> roomContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)widgetBindService:(id)a0 context:(id)a1 container:(id)a2;
+ (id)widgetWithRoom:(id)a0 roomContext:(id)a1;

- (void)widgetDidCreate;
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
- (void)mountDidFinishForLevelDowngradable;
- (void)willShowShopCart:(BOOL)a0;
- (void).cxx_destruct;

@end
