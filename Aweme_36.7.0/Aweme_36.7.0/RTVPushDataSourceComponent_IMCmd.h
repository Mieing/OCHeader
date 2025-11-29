@class NSString, NSDictionary, RTVVoipEventHandler, NSMutableSet;
@protocol RTVVoipRoomService, RTVPushDataSourceComponentInterface, RTVVoipConfigureManagerInterface, RTVVoipManagerInterface;

@interface RTVPushDataSourceComponent_IMCmd : RTVComponentBase <IESIMRTVCommandMsgNotifierDelegate, IESIMCoreServiceFactoryMessage>

@property (readonly, nonatomic) RTVVoipEventHandler *eventHandler;
@property (readonly, nonatomic) id<RTVVoipRoomService> roomInfoService;
@property (readonly, nonatomic) NSMutableSet *receivedPushSequenceIDs;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (readonly, nonatomic) id<RTVPushDataSourceComponentInterface> dataSourceComponent;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> voipConfigureManager;
@property (readonly, copy, nonatomic) NSDictionary *commandTypeMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)iesim_didFinishCoreServiceFactoryCreate;
- (void)afterInitialComponentAllResolved:(id)a0;
- (id)__commandTypeMapper;
- (void)iesim_didReceiveRTVCommandMessage:(id)a0;
- (void)__didReceiveRTVCommandMessage:(id)a0 commandType:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
