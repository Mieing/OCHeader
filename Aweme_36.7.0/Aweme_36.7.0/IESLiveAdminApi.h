@interface IESLiveAdminApi : HTSLiveApi

- (void)ieslive_switchAuthWithRoomID:(id)a0 type:(long long)a1 state:(BOOL)a2 completion:(id /* block */)a3;
- (void)sendRoomAuthRequestWithRoomID:(id)a0 anchorID:(id)a1 showUserPreview:(BOOL)a2 completion:(id /* block */)a3;
- (void)changePlaybackAuthWithRoomID:(id)a0 state:(BOOL)a1 completion:(id /* block */)a2;
- (void)changeAudienceRecordAuthWithRoomID:(id)a0 state:(BOOL)a1 completion:(id /* block */)a2;

@end
