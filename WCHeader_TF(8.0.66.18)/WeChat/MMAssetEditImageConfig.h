@interface MMAssetEditImageConfig : MMAssetConfigObject

+ (id)ConfigInstance;

- (BOOL)isRetrivingOriginImage;
- (BOOL)shouldCompressLongImage;
- (BOOL)isRetrivingOriginEditedImage;
- (struct CGSize { double x0; double x1; })imageSizeLimit;

@end
