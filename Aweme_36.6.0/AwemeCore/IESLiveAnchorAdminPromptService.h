@class NSString, IESLiveAnchorAdminPromptAPI;

@interface IESLiveAnchorAdminPromptService : IESLiveAdminPromptService <IESLiveAnchorAdminPromptService>

@property (retain, nonatomic) IESLiveAnchorAdminPromptAPI *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)addPromptWithRoomID:(id)a0 secUserId:(id)a1 secAnchorID:(id)a2 completion:(id /* block */)a3;
- (void)deletPromptWithRoomID:(id)a0 secUserId:(id)a1 secAnchorID:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end
