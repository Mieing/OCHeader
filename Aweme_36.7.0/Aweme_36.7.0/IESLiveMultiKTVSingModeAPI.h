@interface IESLiveMultiKTVSingModeAPI : HTSLiveApi

- (void)submit2AuditWithOriginalImage:(id)a0 avatarImage:(id)a1 extra:(id)a2 completion:(id /* block */)a3;
- (void)getAvatarAuditResult:(id /* block */)a0;

@end
