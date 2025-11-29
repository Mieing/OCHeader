@class NSString;

@interface AFDPersonalRecommendManager : NSObject <AFDPersonalRecommendManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPersonalRecommendSwitchOn;
+ (id)filterFamiliarFeedDataSource:(id)a0;
+ (BOOL)shouldFilterCacheAwemeModel:(id)a0;
+ (id)p_filteredDataSource:(id)a0;
+ (BOOL)p_shouldFilterAwemeModel:(id)a0;
+ (void)deletePersonalRecommendIfNeededWithDatasource:(id)a0 currentIndex:(long long)a1 completedBlock:(id /* block */)a2;


@end
