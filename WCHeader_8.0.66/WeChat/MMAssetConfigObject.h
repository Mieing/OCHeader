@interface MMAssetConfigObject : NSObject

@property (nonatomic) BOOL disableConvertRawImageData;

- (BOOL)isRetrivingOriginImage;
- (BOOL)shouldCompressLongImage;
- (struct CGSize { double x0; double x1; })imageSizeLimit;
- (BOOL)isCompressResolutionSizeValid:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })imageResultSizeForOriginSize:(struct CGSize { double x0; double x1; })a0;
- (double)compressQuality;
- (double)minCompressEarnings;
- (unsigned long long)minNoneCompressNormalImageSize;
- (unsigned long long)minNoneCompressLongImageSize;
- (BOOL)isRetrivingOriginEditedImage;
- (BOOL)disableOpportunisticDeliverMode;
- (id)description;

@end
