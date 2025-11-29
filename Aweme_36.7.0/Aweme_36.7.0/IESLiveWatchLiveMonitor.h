@protocol IESLiveRoomService, IESLiveUserService;

@interface IESLiveWatchLiveMonitor : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLiveUserService> userService;

+ (void)monitorAndCheckWithEventName:(id)a0 preEvent:(id /* block */)a1 useTrace:(BOOL)a2 moduleKey:(id)a3 diContext:(id)a4;
+ (void)monitorShareWithEvent:(id)a0 preEvent:(id /* block */)a1 useTrace:(BOOL)a2 diContext:(id)a3;
+ (void)monitorLongPressWithEvent:(id)a0 preEvent:(id /* block */)a1 useTrace:(BOOL)a2 diContext:(id)a3;
+ (void)monitorBannerWithEvent:(id)a0 preEvent:(id /* block */)a1 useTrace:(BOOL)a2 diContext:(id)a3;
+ (void)monitorMoreToolsWithEvent:(id)a0 preEvent:(id /* block */)a1 useTrace:(BOOL)a2 diContext:(id)a3;
+ (void)monitorCleanScreenWithEvent:(id)a0 preEvent:(id /* block */)a1 useTrace:(BOOL)a2 diContext:(id)a3;
+ (void)monitorMediaLinkWithEvent:(id)a0 preEvent:(id /* block */)a1 useTrace:(BOOL)a2 diContext:(id)a3;
+ (void)monitorToolbarWithEvent:(id)a0 preEvent:(id /* block */)a1 useTrace:(BOOL)a2 diContext:(id)a3;
+ (void)monitorWithEvent:(id)a0 preEvent:(id /* block */)a1 useTrace:(BOOL)a2 onlyKeepALog:(BOOL)a3 diContext:(id)a4;
+ (void)monitorWithEvent:(id)a0 preEvent:(id /* block */)a1 useTrace:(BOOL)a2 diContext:(id)a3;

- (id)allowEventListForTrace;
- (void).cxx_destruct;

@end
