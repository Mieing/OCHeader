@class UIImage, NSString, AWEAssetModel;

@interface AWEImageAlbumEditExportPlaceholderModel : AWEImageAlbumAssetExportItemBase

@property (nonatomic) BOOL canceled;
@property (retain, nonatomic) AWEAssetModel *inputAssetModel;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) UIImage *inputImage;
@property (retain, nonatomic) NSString *inputImagePath;
@property (copy, nonatomic) NSString *inputImagePathForCompress;
@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSString *compressedFramsImageFilePath;
@property (nonatomic) long long fetchResizeMode;
@property (nonatomic) struct CGSize { double width; double height; } albumSourceSize;
@property (nonatomic) BOOL originalImageReady;
@property (nonatomic) BOOL isDownloadItem;
@property (nonatomic) BOOL isDownloadFaild;
@property (nonatomic) double downloadDuration;
@property (nonatomic) BOOL isPOIComment;
@property (nonatomic) BOOL shouldForceRecodeImage;

- (void).cxx_destruct;

@end
