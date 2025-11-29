@interface IESLiveAuthorizationApi : HTSLiveApi

- (void)fetchAuthorizationModelWithSource:(id)a0 roomID:(id)a1 completion:(id /* block */)a2;
- (void)closeAuthorizationGuideTopViewWithSource:(id)a0;

@end
