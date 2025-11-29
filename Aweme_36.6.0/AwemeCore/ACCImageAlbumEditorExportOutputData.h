@class NSString, UIImage, ACCImageAlbumImageMediaInfo, ACCImageAlbumExportTrackerModel;

@interface ACCImageAlbumEditorExportOutputData : NSObject

@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long index;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double imageScale;
@property (nonatomic) double compressionQuality;
@property (retain, nonatomic) ACCImageAlbumImageMediaInfo *trackInfo;
@property (retain, nonatomic) ACCImageAlbumExportTrackerModel *exportTrackerInfo;
@property (nonatomic) unsigned long long exportImageType;

- (void).cxx_destruct;

@end
