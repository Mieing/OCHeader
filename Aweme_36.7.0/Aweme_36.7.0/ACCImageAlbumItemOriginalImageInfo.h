@class ACCImageAlbumItemDraftResourceRestorableModel, ACCImageAlbumImageMediaInfo;

@interface ACCImageAlbumItemOriginalImageInfo : ACCImageAlbumItemDraftResourceRestorableModel

@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double scale;
@property (retain, nonatomic) ACCImageAlbumItemDraftResourceRestorableModel *placeHolderImageInfo;
@property (nonatomic) struct CGSize { double width; double height; } importAlbumSouceSize;
@property (nonatomic) long long importAlbumResizeMode;
@property (retain, nonatomic) ACCImageAlbumImageMediaInfo *importImageTrackInfo;

- (void)amazingMigrateResourceToNewDraftWithTaskId:(id)a0;
- (void)updateImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)resetImageWithAbsoluteFilePath:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageScale:(double)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })imageSize;

@end
