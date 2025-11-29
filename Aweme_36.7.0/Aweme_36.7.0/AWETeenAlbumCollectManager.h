@interface AWETeenAlbumCollectManager : NSObject

+ (void)clickedRedDotInTabBar;
+ (BOOL)shouldShowRedDotInTabBar;
+ (void)haveCollectedAlbum;
+ (BOOL)shouldShowRedDotInSlidingBar;
+ (void)clickedRedDotInSlidingBar;
+ (BOOL)shouldShowRedDotInAlbumCollectCard;
+ (void)clickedRedDotInAlbumCollectCard;
+ (void)updateAlbumCollectStatus:(long long)a0 albumID:(id)a1 fakeAlbumType:(unsigned long long)a2 completion:(id /* block */)a3;

@end
