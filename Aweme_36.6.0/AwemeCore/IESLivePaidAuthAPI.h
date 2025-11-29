@interface IESLivePaidAuthAPI : HTSLiveApi

- (long long)getCurrentPaidLiveType:(long long)a0;
- (void)requestPaidForAuthID:(id)a0 paidScene:(long long)a1 completion:(id /* block */)a2;
- (void)requestPaiedInfoForRoom:(id)a0 pingID:(id)a1 authID:(id)a2 paidScene:(long long)a3 type:(long long)a4 completion:(id /* block */)a5;

@end
