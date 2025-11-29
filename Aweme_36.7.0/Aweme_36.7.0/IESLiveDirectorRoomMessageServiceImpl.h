@class NSMutableDictionary, IESLiveIMDirectorRoomActionCreator, NSArray, NSString, IESLiveDirectorRoomChannelConfig;

@interface IESLiveDirectorRoomMessageServiceImpl : IESLiveGeneralBaseService <IESLiveDirectorRoomMessageService, IESLiveDirectorRoomMessageDispatchProvider>

@property (retain, nonatomic) IESLiveIMDirectorRoomActionCreator *actionCreator;
@property (retain, nonatomic) NSMutableDictionary *dispatcherMap;
@property (nonatomic) BOOL needShowToast;
@property (retain, nonatomic) IESLiveDirectorRoomChannelConfig *currentConfig;
@property (copy, nonatomic) NSArray *allScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)addSubscriber:(id)a0 forMessages:(id)a1;
- (void)addSubscriber:(id)a0 forWRDSMessage:(Class)a1 firstCallbackWithSubkey:(id)a2;
- (void)addSubscriber:(id)a0 forWRDSMessages:(id)a1;
- (void)startWithConfig:(id)a0;
- (id)subDispatcherForScene:(unsigned long long)a0;
- (void)stopWithScene:(unsigned long long)a0;
- (id)currentChannelConfig;
- (void)connectionOpen:(id)a0;
- (id)dispatcherForScene:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)connectionClosed:(id)a0;
- (void)addSubscriber:(id)a0;

@end
