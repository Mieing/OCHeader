@interface HTSVideoMusicInfoDataManager : NSObject

+ (void)requestWithCursor:(id)a0 count:(id)a1 isCommerce:(BOOL)a2 recordMode:(long long)a3 videoDuration:(double)a4 completion:(id /* block */)a5;
+ (void)requestWithMusicClassId:(id)a0 cursor:(id)a1 count:(id)a2 isCommerce:(BOOL)a3 recordMode:(long long)a4 videoDuration:(double)a5 playlistId:(id)a6 otherParams:(id)a7 completion:(id /* block */)a8;
+ (void)requestWithMusicClassId:(id)a0 cursor:(id)a1 count:(id)a2 isCommerce:(BOOL)a3 completion:(id /* block */)a4;

@end
