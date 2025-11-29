@class NSString, AWEPOIIMPhotoManager, AWEPOIIMAlbumManager, AWEIMAssetGalleryPickerCustomConfig;

@interface LSIMPhotoPickerServiceImpl : NSObject <LSIMPhotoPickerService>

@property (retain, nonatomic) AWEPOIIMAlbumManager *albumManager;
@property (retain, nonatomic) AWEPOIIMPhotoManager *photoManager;
@property (retain, nonatomic) AWEIMAssetGalleryPickerCustomConfig *pickerCustomConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
