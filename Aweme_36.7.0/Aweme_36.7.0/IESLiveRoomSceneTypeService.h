@class NSString;

@interface IESLiveRoomSceneTypeService : IESLiveGeneralBaseService <IESLiveRoomSceneTypeService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (unsigned long long)serviceImmediateLoadTypes;

- (BOOL)liveTypeIsECommerce;
- (BOOL)liveTypeIsGamePromotion;
- (BOOL)liveTypeIsLocalLife;
- (BOOL)liveTypeIsLinkmicRoom;
- (BOOL)liveTypeIsOfficialChannelRoom;
- (BOOL)liveTypeIsVSRoomAndMultiTab;
- (BOOL)liveTypeIsMediaRoom;
- (BOOL)liveTypeIsVSRoom;
- (BOOL)supportWithSceneType:(unsigned long long)a0;

@end
