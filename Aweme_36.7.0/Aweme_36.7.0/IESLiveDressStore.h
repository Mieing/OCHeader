@class HTSEventContext, NSString, IESLiveComponentContext;
@protocol IESLiveRoomService, IESLivePrivilegeDressAPI, IESLivePrivilegeRoomModuleAdapter;

@interface IESLiveDressStore : NSObject <HTSLiveMessageSubscriber, IESLivePrivilegeBuyDressInterface, PuzzleKitViewLifeCycleProtocol>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) id<IESLivePrivilegeDressAPI> buyDressApi;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) id<IESLivePrivilegeRoomModuleAdapter> privilegeAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)kitView:(id)a0 willCreatedWithContext:(id)a1;
- (void)buyDressFormGiftPanel:(id)a0 trackParams:(id)a1 rechargeBlock:(id /* block */)a2 buyCompletion:(id /* block */)a3;
- (id)initWithRoom:(id)a0 componentContext:(id)a1 trackContext:(id)a2;
- (void)updateDressContext;
- (void)registerDressModule;
- (void)prefetchCurrentUserDress;
- (id)openEffectPreloadConfig;
- (BOOL)p_shouldSkipDiamondCheck;
- (BOOL)hasPlentyDiamand:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
