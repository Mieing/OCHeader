@interface ACCMusicCollectionFeedNetworkManager : NSObject

+ (void)requestMusicCollectionPickWithCursor:(id)a0 extraMusicIds:(id)a1 recordMode:(long long)a2 videoDuration:(double)a3 isCommerceMusic:(BOOL)a4 playlistId:(id)a5 params:(id)a6 completion:(id /* block */)a7;
+ (void)requestMusicCollectionFeedWithCursor:(id)a0 count:(id)a1 recordMode:(long long)a2 videoDuration:(double)a3 isCommerceMusic:(BOOL)a4 completion:(id /* block */)a5;
+ (id)musicCollectionFeedURLString:(BOOL)a0;
+ (id)musicCollectionPickURLString:(BOOL)a0;

@end
