@class HTSLiveApi;

@interface AWELiveVerifyApi : NSObject

@property (retain, nonatomic) HTSLiveApi *clientApi;

- (void)multiIDAuth:(id /* block */)a0;
- (void)verifyForMultiID:(id /* block */)a0;
- (void)requestZMAuthParams:(id)a0 withCompletion:(id /* block */)a1;
- (void)queryZMAuthResultWithToken:(id)a0 source:(id)a1 completion:(id /* block */)a2;
- (void)requestZMAuthParamsWithCompletion:(id /* block */)a0;
- (void)queryZMAuthResultWithToken:(id)a0 completion:(id /* block */)a1;
- (void)queryZYAuthResultWithToken:(id)a0 sourceDictionary:(id)a1 completion:(id /* block */)a2;
- (void)queryZYAuthResultWithSourceDictionary:(id)a0 completion:(id /* block */)a1;
- (void)certificationQueryWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
