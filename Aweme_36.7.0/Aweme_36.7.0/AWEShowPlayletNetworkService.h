@interface AWEShowPlayletNetworkService : NSObject

+ (id)uploadReCreationVideoWatchRecord:(id)a0 tagId:(long long)a1 progress:(long long)a2 completion:(id /* block */)a3;
+ (id)requestPlayletVideoList:(id)a0 cursor:(long long)a1 count:(long long)a2 pullDown:(BOOL)a3 disableInsertAd:(long long)a4 requestParams:(id)a5 completeBlock:(id /* block */)a6;
+ (id)requestSeriesCardFeed:(id)a0 completion:(id /* block */)a1;

@end
