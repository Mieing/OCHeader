@class IESGCPApi;

@interface IESGCPUserProfileApi : NSObject

@property (retain, nonatomic) IESGCPApi *api;

- (void)requestUserProfileWithGameID:(id)a0 userID:(id)a1 publicKey:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
