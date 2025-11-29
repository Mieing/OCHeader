@class NSString, NSMutableArray, NSMapTable;

@interface IESLiveContainerKitWatchdogFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveContainerKitWatchdog>

@property (retain, nonatomic) NSMutableArray *upperRightWidgetDataListArray;
@property (retain, nonatomic) NSMapTable *operateHandlerMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)remoteRoomDataReady:(id)a0;
- (void)removeViewElement:(id)a0;
- (id)addViewElement:(id)a0 forType:(unsigned long long)a1;
- (void)removeViewElementWithResource:(unsigned long long)a0;
- (void)updateAllowList:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
