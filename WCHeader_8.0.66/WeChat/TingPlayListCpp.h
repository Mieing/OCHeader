@class NSString;

@interface TingPlayListCpp : UnitRCObjcBaseProxyClass <TingPlayList>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getPlayTaskService;
- (id)getRecommendListSource;
- (void)setPlayTaskService:(id)a0;
- (void)setPlayTaskServiceAsync:(id)a0 callback:(id /* block */)a1;
- (void)updateRecommendListSource:(id)a0;
- (int)getPlaylistCount;
- (id)getPlaylistItem:(int)a0;
- (BOOL)moveToFirst:(id)a0;
- (void)clear;
- (BOOL)getRandomPlaylist;
- (void)setRandomPlaylist:(BOOL)a0;
- (void)setShuffled:(BOOL)a0 topClientId:(id)a1;
- (id)getItems;
- (void)addPlayListListener:(id)a0;
- (void)removePlayListListener:(id)a0;
- (void)addRecommendListListener:(id)a0;
- (void)removeRecommendListListener:(id)a0;
- (id)getRecommendCategoryFeed;
- (id)getRecommendTaskServiceList;
- (void)setEnableRecommendListSource:(BOOL)a0;
- (BOOL)getEnableRecommendListSource;

@end
