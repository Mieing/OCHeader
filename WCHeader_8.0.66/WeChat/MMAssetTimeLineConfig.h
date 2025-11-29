@interface MMAssetTimeLineConfig : MMAssetConfigObject

@property (nonatomic) BOOL useHighResolutionImageSize;

+ (id)ConfigInstance;

- (BOOL)isRetrivingOriginImage;
- (BOOL)shouldCompressLongImage;
- (struct CGSize { double x0; double x1; })imageSizeLimit;
- (struct CGSize { double x0; double x1; })imageResultSizeForOriginSize:(struct CGSize { double x0; double x1; })a0;
- (double)compressQuality;

@end
