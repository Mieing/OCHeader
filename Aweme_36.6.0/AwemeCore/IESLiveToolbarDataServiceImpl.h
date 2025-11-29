@class NSMutableDictionary, NSMapTable, NSHashTable, NSArray, NSString;

@interface IESLiveToolbarDataServiceImpl : IESLiveGeneralBaseService <IESLiveToolbarDataService>

@property (retain, nonatomic) NSMapTable *registerHandler;
@property (retain, nonatomic) NSHashTable *dataChangeObserverList;
@property (retain, nonatomic) NSMutableDictionary *registeredAnimationItems;
@property (retain, nonatomic) NSArray *animationItemKeyList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)serviceWillLaunchWithParam:(id)a0;
- (void)serviceRoomDataReady:(id)a0;
- (id)animationItems;
- (void)addDataChangeObserver:(id)a0;
- (id)handlerForItemType:(int)a0;
- (void)registerHandlerWithItemType:(int)a0 handler:(id)a1;
- (void)unregisterHandlerWithItemType:(int)a0 handler:(id)a1;
- (id)handlerMapStringForLog;
- (void)addCoordinateAnimationItem:(id)a0 identifier:(id)a1;
- (void)removeCoordinateAnimationItemByIdentifier:(id)a0;
- (void).cxx_destruct;

@end
