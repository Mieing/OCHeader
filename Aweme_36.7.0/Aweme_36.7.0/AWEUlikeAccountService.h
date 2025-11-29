@class ACCThreadSafeMutableDictionary, NSString;

@interface AWEUlikeAccountService : HTSService <AWEUlikeAccountService>

@property (retain, nonatomic) ACCThreadSafeMutableDictionary *authInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)authInfoWithSource:(id)a0;
- (void)fetchAuthInfoWithSource:(id)a0 completion:(id /* block */)a1;
- (id)cacheKeyWithSource:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
