@class NSString, AWEAssetModel;

@interface AWECommentImageSourceInfoModel : NSObject

@property (copy, nonatomic) NSString *imageUri;
@property (copy, nonatomic) NSString *imageHeight;
@property (copy, nonatomic) NSString *imageWidths;
@property (copy, nonatomic) NSString *imageFormat;
@property (copy, nonatomic) NSString *imageSource;
@property (retain, nonatomic) AWEAssetModel *assetModel;
@property (nonatomic) BOOL isConvertFromLive;

- (void).cxx_destruct;

@end
