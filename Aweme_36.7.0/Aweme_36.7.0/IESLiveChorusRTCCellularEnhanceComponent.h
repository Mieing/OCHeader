@class NSString, IESLiveCellularEnhanceManager;
@protocol IESLivePartyKTVChorusRouter;

@interface IESLiveChorusRTCCellularEnhanceComponent : IESLiveInteractComponentBase <IESLiveInteractionLinkerServiceAction, IESLiveChorusRTCCellularEnhanceRouter>

@property (weak, nonatomic) id<IESLivePartyKTVChorusRouter> partyKTVChorusRouter;
@property (retain, nonatomic) IESLiveCellularEnhanceManager *cellularEnhanceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (void)didSetAttachingDIContext;
- (void)interactionLinkerService:(id)a0 onNetworkQuality:(id)a1 remoteQualities:(id)a2;
- (BOOL)isCellularEnhanceEnable;
- (BOOL)hasCellEnhanceFeature;
- (BOOL)enableCellularEnhance:(BOOL)a0;
- (void)notifyCurrentLoginUserRoleTypeChanged:(unsigned long long)a0;
- (void).cxx_destruct;

@end
