@class NSString;

@interface IESGCPCGTeamPlayComponent : IESGCPCGInstanceBaseComponent <IESGCPCGTeamPlayRouter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)closeFromIMWithMessage:(id)a0;

@end
