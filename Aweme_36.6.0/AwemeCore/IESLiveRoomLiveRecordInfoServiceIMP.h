@class NSString;

@interface IESLiveRoomLiveRecordInfoServiceIMP : IESLiveGeneralBaseService <IESLiveAnchorRoomStatusChangeEvents, IESLiveRoomRecordInfoService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;

- (BOOL)serviceNeedBringInAnchorRoom;
- (void)serviceDidReBind;
- (void)startAnchorLiveWithRoom:(id)a0;
- (void)stopAnchorLive;
- (id)lastValidRoomId;
- (void)updateLastRoomId:(id)a0;
- (void)removeLocalInfo;

@end
