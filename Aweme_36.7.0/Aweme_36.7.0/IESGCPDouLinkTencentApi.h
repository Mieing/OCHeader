@class IESGCPApi;

@interface IESGCPDouLinkTencentApi : NSObject

@property (retain, nonatomic) IESGCPApi *api;

- (void)requestAuthStatusWithGameId:(id)a0 isAuth:(BOOL)a1 completion:(id /* block */)a2;
- (void)requestBindJumpConfigWithGameId:(id)a0 activityId:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
