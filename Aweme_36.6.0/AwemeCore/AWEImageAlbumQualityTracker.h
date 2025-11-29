@interface AWEImageAlbumQualityTracker : NSObject

+ (id)commonTrackInfo;
+ (id)imageAlbumItemsQualityTrackInfoWithImageAlbumData:(id)a0 placeholderCount:(long long)a1;
+ (id)oneTrackInfoFromImageItem:(id)a0 index:(long long)a1;
+ (id)importTrackInfoWithImageItem:(id)a0;
+ (id)editTrackInfoWithImageItem:(id)a0;
+ (id)exportTrackInfoWithImageItem:(id)a0;
+ (void)uploadTrackInfoToTeaWithImageItemModel:(id)a0 extraInfo:(id)a1;
+ (id)diffInfoWithImportTrack:(id)a0 exportTrack:(id)a1 imageItem:(id)a2;
+ (void)doAction:(id /* block */)a0 ifValue1:(id)a1 isNotEqualToValue2:(id)a2;
+ (id)imageAlbumItemsQualityTrackJsonStringWithImageAlbumData:(id)a0 placeholderCount:(long long)a1;
+ (void)monitoringImageAlbumPublishQualityWithImageAlbumData:(id)a0 extraInfo:(id)a1;

@end
