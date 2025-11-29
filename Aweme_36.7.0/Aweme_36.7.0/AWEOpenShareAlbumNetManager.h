@interface AWEOpenShareAlbumNetManager : NSObject

+ (void)requestAlbumInfoWithCardType:(id)a0 max:(long long)a1 count:(long long)a2 clientKey:(id)a3 customMaxVideoCount:(id)a4 scene:(id)a5 Completion:(id /* block */)a6;
+ (void)requestUpdateCustomVideosWithItemIds:(id)a0 cardType:(id)a1 clientKey:(id)a2 completion:(id /* block */)a3;

@end
