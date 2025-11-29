@interface MMAssetChatNormalImageConfig : MMAssetConfigObject

+ (id)ConfigInstance;

- (BOOL)isRetrivingOriginImage;
- (BOOL)shouldCompressLongImage;
- (struct CGSize { double x0; double x1; })imageSizeLimit;
- (double)compressQuality;

@end
