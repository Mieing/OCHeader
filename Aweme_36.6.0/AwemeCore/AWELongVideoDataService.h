@class NSString;

@interface AWELongVideoDataService : NSObject <AWELongVideoDataServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)collectLongVideo:(id)a0 isCollected:(BOOL)a1 completeBlock:(id /* block */)a2;
+ (id)fetchLongVideoListWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)fetchLongVideoWidgetMetaInfoWithAlbumID:(id)a0 episodeID:(id)a1 completion:(id /* block */)a2;
+ (id)fetchLongVideoMetaInfoWithAlbumID:(id)a0 sceneType:(long long)a1 isFromTheater:(BOOL)a2 requestFrom:(long long)a3 completion:(id /* block */)a4;
+ (id)fetchLongVideoScreenCastUISettingWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)fetchLongVideoWatchHistoryWithAlbumID:(id)a0 completion:(id /* block */)a1;
+ (id)fetchSelectEpisodeMetaDetailWithAlbumID:(id)a0 episodeID:(id)a1 awemeID:(id)a2 cursor:(long long)a3 count:(long long)a4 completion:(id /* block */)a5;
+ (id)fetchSelectEpisodeAwemeListWithAlbumID:(id)a0 seriesID:(id)a1 cursor:(long long)a2 count:(long long)a3 completion:(id /* block */)a4;
+ (id)fetchSelectEpisodeListWithAlbumID:(id)a0 cursor:(long long)a1 count:(long long)a2 completion:(id /* block */)a3;
+ (id)fetchLongVideoListWithAlbumID:(id)a0 episodeID:(id)a1 itemID:(id)a2 extraParams:(id)a3 completion:(id /* block */)a4;
+ (id)fetchLongVideoPlusAwemeListWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)fetchLongVideoPlusEpisodeListWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)fetchLongVideoPlusMetaInfoWithAlbumID:(id)a0 episodeID:(id)a1 awemeID:(id)a2 cursor:(long long)a3 count:(long long)a4 completion:(id /* block */)a5;


@end
