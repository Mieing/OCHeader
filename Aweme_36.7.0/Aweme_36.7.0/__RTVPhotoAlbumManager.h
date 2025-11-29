@class NSString;

@interface __RTVPhotoAlbumManager : NSObject <RTVPhotoAlbumManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)saveVideoWithVideoPath:(id)a0;
- (id)__saveVideoToLocalPhotoWithVideoPath:(id)a0;
- (id)__getVideoAssetWithLocalIdentifier:(id)a0;

@end
