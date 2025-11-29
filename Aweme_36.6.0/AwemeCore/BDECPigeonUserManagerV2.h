@class BDECPigeonClientV2, NSMutableDictionary;

@interface BDECPigeonUserManagerV2 : NSObject

@property (retain) NSMutableDictionary *userInfoCache;
@property (weak, nonatomic) BDECPigeonClientV2 *client;

- (void)fetchCurrentUserInfoWithPigeonBizType:(id)a0 completion:(id /* block */)a1;
- (void)fetchCurrentUserInfoFromCacheWithPigeonBizType:(id)a0 completion:(id /* block */)a1;
- (void)fetchCurrentUserPigeonUidWithPigeonBizType:(id)a0 completion:(id /* block */)a1;
- (void)fetchUserInfoListWithPigeonUids:(id)a0 pigeonBizType:(id)a1 completion:(id /* block */)a2;
- (void)setupPatch;
- (void)fetchCurrentUserInfoWithPigeonBizType:(id)a0 requestHost:(id)a1 requestCommonParamsBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)fetchUserInfoListPaginationWithPigeonUids:(id)a0 pigeonBizType:(id)a1 retryCount:(long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithClient:(id)a0;

@end
