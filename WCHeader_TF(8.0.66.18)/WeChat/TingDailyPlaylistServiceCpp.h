@class NSString;

@interface TingDailyPlaylistServiceCpp : UnitRCObjcBaseProxyClass <TingDailyPlaylistService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addToLocalHistory:(id)a0 tapeItem:(id)a1 playTaskService:(id)a2;
- (id)getConsumeInfo:(id)a0;
- (id)getDailyRecommendCategoryItem;
- (void)getPlayTaskService:(id /* block */)a0;
- (void)clearCache;
- (id)getGlobalDailyPlayService;
- (void)markConsumed;

@end
