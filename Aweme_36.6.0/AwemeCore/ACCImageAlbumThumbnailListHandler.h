@interface ACCImageAlbumThumbnailListHandler : NSObject

+ (id)subscriberArray;
+ (void)p_sortDataListAndIdentifierList:(id)a0 repoImageAlbumInfo:(id)a1 selectedAssets:(id)a2;
+ (double)editPageThumbnailListDeleteViewHeight;
+ (void)handleImageAlbumEditWithPublishViewModel:(id)a0 selectedAssets:(id)a1 completion:(id /* block */)a2;
+ (void)deleteImageAlbumData:(id)a0 editService:(id)a1 atIndex:(long long)a2;
+ (void)moveImageAlbumData:(id)a0 editService:(id)a1 fromIndex:(long long)a2 toIndex:(long long)a3;
+ (void)updateImageAlbumData:(id)a0 editService:(id)a1 newRepoImageAlbumInfo:(id)a2 selectedAssets:(id)a3;
+ (void)addSubscriber:(id)a0;
+ (void)removeSubscriber:(id)a0;

@end
