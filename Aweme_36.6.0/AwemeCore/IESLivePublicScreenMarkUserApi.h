@interface IESLivePublicScreenMarkUserApi : HTSLiveApi

- (void)fetchUserInteractionRelationWithUserID:(id)a0 scene:(id)a1 completion:(id /* block */)a2;
- (void)updateMarkUserStatusWithUserID:(id)a0 isCancel:(BOOL)a1 completion:(id /* block */)a2;

@end
