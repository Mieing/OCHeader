@class NSString, ACCImageAlbumExportTrackerModel, LMImageQualityImage;

@interface ACCImageAlbumExportItemModel : NSObject

@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double imageScale;
@property (nonatomic) double imageFileSize;
@property (nonatomic) unsigned long long exportImageType;
@property (retain, nonatomic) ACCImageAlbumExportTrackerModel *exportTrackerInfo;
@property (retain, nonatomic) LMImageQualityImage *outputImageInfo;

+ (id)filePathURLsWithItemModels:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (BOOL)fileExists;

@end
