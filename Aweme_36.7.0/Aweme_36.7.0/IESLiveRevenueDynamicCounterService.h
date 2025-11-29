@class NSString, IESLiveRevenueDynamicCounter;
@protocol IESLiveRoomService;

@interface IESLiveRevenueDynamicCounterService : IESLiveGeneralBaseService <IESLiveComponentLifeCycleNotifier, IESLiveAioLinkLinkMicStateService>

@property (retain, nonatomic) IESLiveRevenueDynamicCounter *dynamicCounter;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) BOOL serviceCenterAvailableSwitch;
@property (nonatomic) BOOL isInitServiceCenter;
@property (nonatomic) BOOL isBasicComponentReady;
@property (nonatomic) BOOL isReuseServiceCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;
+ (unsigned long long)serviceImmediateLoadTypes;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)serviceRoomDataReady:(id)a0;
- (void)liveWillEndWithReason:(unsigned long long)a0;
- (void)componentMountDidFinishForLevel:(long long)a0;
- (id)getCurrentLinkMicState;
- (void)storageTime;
- (void)initServiceCenter;
- (void).cxx_destruct;

@end
