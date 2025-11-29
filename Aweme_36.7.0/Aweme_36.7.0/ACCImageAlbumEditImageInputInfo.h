@class NSString, NSArray;

@interface ACCImageAlbumEditImageInputInfo : ACCImageAlbumItemOriginalImageInfo

@property (nonatomic) BOOL isFromCamemaCapture;
@property (nonatomic) BOOL forceNeedSendFrame;
@property (copy, nonatomic) NSString *uuidStr;
@property (nonatomic) BOOL originalImageReady;
@property (copy, nonatomic) NSArray *mentions;
@property (nonatomic) BOOL isDownloadItem;
@property (nonatomic) BOOL isDownloadFaild;
@property (nonatomic) double downloadDuration;

- (void)updatePlaceholderImageWithFilePath:(id)a0;
- (void).cxx_destruct;

@end
