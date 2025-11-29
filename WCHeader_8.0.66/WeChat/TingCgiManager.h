@interface TingCgiManager : NSObject

+ (void)likeOp:(BOOL)a0 scene:(int)a1 listenId:(id)a2 completion:(id /* block */)a3;
+ (void)likeOp:(BOOL)a0 scene:(int)a1 listenId:(id)a2 type:(int)a3 finderFeedId:(id)a4 completion:(id /* block */)a5;
+ (void)likeOp:(BOOL)a0 scene:(int)a1 isPublic:(BOOL)a2 listenId:(id)a3 categoryId:(id)a4 completion:(id /* block */)a5;
+ (void)likeOp:(BOOL)a0 scene:(int)a1 isPublic:(BOOL)a2 listenId:(id)a3 categoryId:(id)a4 type:(int)a5 finderFeedId:(id)a6 completion:(id /* block */)a7;
+ (void)likeReportBy28683WithScene:(int)a0 listenId:(id)a1 like:(BOOL)a2;
+ (void)likeOp:(BOOL)a0 scene:(int)a1 item:(id)a2 categoryItem:(id)a3 completion:(id /* block */)a4;
+ (void)likeOp:(BOOL)a0 scene:(int)a1 isPublic:(BOOL)a2 item:(id)a3 categoryItem:(id)a4 completion:(id /* block */)a5;
+ (void)modifyListenLaterStatusWithItem:(id)a0 isListenLater:(BOOL)a1 scene:(int)a2 completion:(id /* block */)a3;
+ (void)fetchNewDiscoverItems:(id)a0 completion:(id /* block */)a1;
+ (void)fetchCategoryOrAlbumById:(id)a0 completion:(id /* block */)a1;
+ (void)fetchListenItems:(id)a0 completion:(id /* block */)a1;
+ (void)dislikeWithListenId:(id)a0 andCategoryId:(id)a1 completion:(id /* block */)a2;
+ (void)fetchMusicPlayItemWithListenId:(id)a0 forceUpdate:(BOOL)a1 needEncrypt:(BOOL)a2 completion:(id /* block */)a3;

@end
