@class BDECIMClient, NSMutableDictionary;

@interface BDECPigeonUserManager : NSObject

@property (retain, nonatomic) BDECIMClient *client;
@property (retain) NSMutableDictionary *userInfoCache;

- (void)fetchCurrentUserInfoWithPigeonBizType:(id)a0 completion:(id /* block */)a1;
- (void)fetchCurrentUserInfoFromCacheWithPigeonBizType:(id)a0 completion:(id /* block */)a1;
- (void)fetchCurrentUserPigeonUidWithPigeonBizType:(id)a0 completion:(id /* block */)a1;
- (void)fetchCurrentUserInfoWithPigeonBizType:(id)a0 requestHost:(id)a1 requestCommonParamsBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (id)initWithIMClient:(id)a0;
- (void).cxx_destruct;

@end
