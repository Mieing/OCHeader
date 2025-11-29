@class NSString;

@interface IESLiveStartLiveRoomServiceIMP : IESLiveGeneralBaseService <IESLiveStartLiveRoomService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)openLiveWithRoomModel:(id)a0 isResumed:(BOOL)a1;
- (void)openLiveWithRoomModel:(id)a0 isResumed:(BOOL)a1 needReturnAnchorVC:(BOOL)a2 completion:(id /* block */)a3;
- (void)gotoAnchorLivePageWithRoomModel:(id)a0 anchorRoomContext:(id)a1 needReturnAnchorVC:(BOOL)a2 completion:(id /* block */)a3;
- (id)createAnchorViewControllerWithRoom:(id)a0 anchorRoomContext:(id)a1 recorder:(id)a2 enterFrom:(id)a3 enterMethod:(id)a4;

@end
