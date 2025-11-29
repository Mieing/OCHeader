@class HTSLiveUser, NSString, NSDictionary, IESLiveMultiLinkerApi, HTSLivePKApi;
@protocol IESLiveRevenueInteractProvider;

@interface IESLiveRevenueInteractReceiverDisturbViewModel : NSObject <IESLivePKStateAction>

@property (retain, nonatomic) IESLiveMultiLinkerApi *mLinkerApi;
@property (retain, nonatomic) HTSLivePKApi *pkApi;
@property (retain, nonatomic) HTSLiveUser *oppositeUser;
@property (nonatomic) unsigned long long scene;
@property (weak, nonatomic) id<IESLiveRevenueInteractProvider> provider;
@property (retain, nonatomic) NSDictionary *tempTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)didChangePKStateFrom:(long long)a0 to:(long long)a1;
- (void)p_rejectAutoMatchInvitation;
- (id)initWithDIContext:(id)a0 oppositeAnchor:(id)a1 scene:(unsigned long long)a2 provider:(id)a3;
- (void)autoRejectCurrentRoomWithComplete:(id /* block */)a0;
- (void)temporaryRejectInvitedForAnchor:(id)a0 complete:(id /* block */)a1;
- (void)p_pkAutoRejectCurrentRoom:(id)a0 roomID:(id)a1 secUid:(id)a2 complete:(id /* block */)a3;
- (void)p_multiLinkerAutoRejectCurrentRoom:(id)a0 roomID:(id)a1 secUid:(id)a2 complete:(id /* block */)a3;
- (void)p_pkTemporaryRejectInvitedForAnchor:(id)a0 roomID:(id)a1 secUid:(id)a2 complete:(id /* block */)a3;
- (void)p_multiLinkerTemporaryRejectInvitedForAnchor:(id)a0 roomID:(id)a1 secUid:(id)a2 complete:(id /* block */)a3;
- (void).cxx_destruct;

@end
