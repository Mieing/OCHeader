@interface IESIMGroupRecommendImpl.GroupRecommendDataService : NSObject <IESIMGroupRecommendDataService>

- (void)fetchGroupRecommendListWithSource:(id)a0 categoryId:(id)a1 cursor:(long long)a2 count:(long long)a3 lastGroupIds:(id)a4 bizExt:(id)a5 completion:(id /* block */)a6;
- (void)fetchHotspotGroupListWithSource:(id)a0 existingHotspotIds:(id)a1 bizExt:(id)a2 completion:(id /* block */)a3;
- (long long)groupRecommendIndex;
- (void).cxx_destruct;
- (id)init;

@end
