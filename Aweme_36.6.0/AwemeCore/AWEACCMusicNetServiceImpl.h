@class NSString;

@interface AWEACCMusicNetServiceImpl : HTSService <ACCMusicNetServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestAIRecommendMusicListWithZipURI:(id)a0 count:(id)a1 otherParams:(id)a2 completion:(id /* block */)a3;
+ (void)requestWithCursor:(id)a0 count:(id)a1 noDuplicate:(id)a2 otherParams:(id)a3 useRecomByVideoInterface:(id)a4 completion:(id /* block */)a5;
+ (void)requestRecentMusicDetailWithMusicList:(id)a0 scene:(id)a1 completion:(id /* block */)a2;
+ (void)requestRecommendMusicListWithZipURI:(id)a0 count:(id)a1 parameters:(id)a2 completion:(id /* block */)a3;

- (void)requestMusicItemWithID:(id)a0 completion:(id /* block */)a1;
- (void)requestMusicItemWithID:(id)a0 basicParams:(id)a1 completion:(id /* block */)a2;
- (void)requestMusicItemWithID:(id)a0 additionalParams:(id)a1 completion:(id /* block */)a2;
- (void)fetchImageMusicBeatsLocalURLWithMusic:(id)a0 withProgress:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)isMusicSupportBeats:(id)a0;
- (id)fetchCachedMusicWithID:(id)a0 cacheKey:(id)a1;
- (id)fetchCachedMusicListWithCacheKey:(id)a0;
- (BOOL)cacheMusicModel:(id)a0 cacheKey:(id)a1;
- (void)cacheMusicList:(id)a0 cacheKey:(id)a1;
- (void)fetchDefaultMusicListWithURLGoup:(id)a0 callback:(id /* block */)a1;
- (void)fetchAIFramesUploadAuthkeyWithCallback:(id /* block */)a0;
- (void)requestAIRecommendMusicListWithZipURI:(id)a0 count:(id)a1 otherParams:(id)a2 completion:(id /* block */)a3;
- (void)requestAIRecommendMusicListWithZipURI:(id)a0 count:(id)a1 otherParams:(id)a2 loadMoreCompletion:(id /* block */)a3;
- (void)requestWithScene:(id)a0 cursor:(id)a1 region:(id)a2 count:(id)a3 completion:(id /* block */)a4;
- (void)requestWithCursor:(id)a0 count:(id)a1 noDuplicate:(id)a2 otherParams:(id)a3 useRecomByVideoInterface:(id)a4 completion:(id /* block */)a5;
- (void)requestCollectingMusicsWithCursor:(id)a0 count:(id)a1 channelID:(id)a2 completion:(id /* block */)a3;
- (void)requestRecentMusicDetailWithMusicList:(id)a0 scene:(id)a1 completion:(id /* block */)a2;
- (void)fetchMusicListWithURL:(id)a0 params:(id)a1 completion:(id /* block */)a2;

@end
