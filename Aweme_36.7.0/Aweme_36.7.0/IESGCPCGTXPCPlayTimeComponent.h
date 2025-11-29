@class IESGCPXPlayGameAPI, IESGCPCGMembershipCardViewProvider, IESGCPCGTXPCPlayTimeDisplayStrategy;

@interface IESGCPCGTXPCPlayTimeComponent : IESGCPCGInstanceBaseComponent

@property (retain, nonatomic) IESGCPXPlayGameAPI *api;
@property (retain, nonatomic) IESGCPCGMembershipCardViewProvider *membershipCardViewProvider;
@property (retain, nonatomic) IESGCPCGTXPCPlayTimeDisplayStrategy *displayStrategy;

- (void)didSetGameCPDIContext;
- (void)playInstance:(id)a0 playStatusDidUpdated:(long long)a1 info:(id)a2;
- (void)playInstanceOnFirstFrameReceived:(id)a0 info:(id)a1;
- (void)updatePlayTimeInfoWithData:(id)a0;
- (void).cxx_destruct;

@end
