@class NSString;

@interface AWERelationFollowCleanListDataController : AWEBaseDataController <AWERelationFollowCleanListDataProtocol>

@property (nonatomic) long long currentIndex;
@property (nonatomic) long long vcdCount;
@property (nonatomic) long long hotsoonHasMore;
@property (nonatomic) BOOL unreadNeedTotal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchDataWithType:(BOOL)a0 sourceType:(long long)a1 completion:(id /* block */)a2;
- (void)fetchCategoryCountCompletion:(id /* block */)a0;
- (void)__fetchDataWithType:(BOOL)a0 sourceType:(long long)a1 completion:(id /* block */)a2;
- (id)paramsWithFetchType:(BOOL)a0 sourceType:(long long)a1;
- (void)fetchDataWithType:(BOOL)a0 completion:(id /* block */)a1;

@end
