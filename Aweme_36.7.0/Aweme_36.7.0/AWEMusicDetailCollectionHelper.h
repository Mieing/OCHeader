@interface AWEMusicDetailCollectionHelper : AWEMusicDetailFeatureHelper

@property (nonatomic) BOOL isCollectRequesting;
@property (nonatomic) long long retryCount;
@property (copy, nonatomic) id /* block */ collectionDidChangeHandler;

+ (id)helperWithDataContext:(id)a0 collectionDidChangeHandler:(id /* block */)a1;

- (void)p_collectWithModel:(id)a0 updateUIBlock:(id /* block */)a1;
- (void)trackCollectMusicWithModel:(id)a0 isCollected:(BOOL)a1;
- (void)trackCollectionSongWithModel:(id)a0 isCollected:(BOOL)a1;
- (void)trackSearchFavouriteWithModel:(id)a0 isCollected:(BOOL)a1;
- (void)p_collectWithModel:(id)a0 retry:(BOOL)a1 updateUIBlock:(id /* block */)a2;
- (void)trackCollectMusicPerformanceWithModel:(id)a0 toCollect:(unsigned long long)a1 extraParams:(id)a2;
- (void)collectWithModel:(id)a0 updateUIBlock:(id /* block */)a1;
- (void)trackDidTapFavouriteHint;
- (void).cxx_destruct;

@end
