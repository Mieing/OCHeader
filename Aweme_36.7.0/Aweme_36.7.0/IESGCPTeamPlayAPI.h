@class IESGCPApi;

@interface IESGCPTeamPlayAPI : IESGCPApi

@property (retain, nonatomic) IESGCPApi *api;

- (void)requestTeamPlayGameInfoPlayId:(id)a0 completion:(id /* block */)a1;
- (void)reportTeamPlayEnterGame:(unsigned long long)a0 scheme:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
