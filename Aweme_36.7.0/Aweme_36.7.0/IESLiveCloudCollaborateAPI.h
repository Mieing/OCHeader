@interface IESLiveCloudCollaborateAPI : HTSLiveApi

- (id)apiRequestByPath:(id)a0 callback:(id /* block */)a1;
- (void)acceptWithInviteUserId:(long long)a0 collaborateRoomId:(long long)a1 roomId:(long long)a2 inviteId:(long long)a3 completion:(id /* block */)a4;
- (void)joinWithCollaborateRoomId:(long long)a0 roomId:(long long)a1 completion:(id /* block */)a2;
- (void)rejectWithInviteUserId:(long long)a0 collaborateRoomId:(long long)a1 roomId:(long long)a2 inviteId:(long long)a3 reason:(id)a4 completion:(id /* block */)a5;
- (void)leaveWithCollaborateRoomId:(long long)a0 roomId:(long long)a1 userId:(long long)a2 completion:(id /* block */)a3;
- (void)pingWithCollaborateRoomId:(long long)a0 roomId:(long long)a1 completion:(id /* block */)a2;

@end
