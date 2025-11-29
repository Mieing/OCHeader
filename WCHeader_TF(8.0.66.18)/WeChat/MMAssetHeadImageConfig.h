@interface MMAssetHeadImageConfig : MMAssetConfigObject

+ (id)ConfigInstance;

- (BOOL)isRetrivingOriginImage;
- (struct CGSize { double x0; double x1; })imageSizeLimit;
- (double)compressQuality;
- (BOOL)shouldCompressLongImage;

@end
