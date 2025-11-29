@class APCDTOFilterConfig, NSString, UIImage, PHAsset, APCDTOStickersConfig, APCMediaResourceModel;

@interface APCDTOImage : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) APCMediaResourceModel *resourceModel;
@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) APCDTOStickersConfig *stickerConfig;
@property (retain, nonatomic) APCDTOFilterConfig *filterConfig;
@property (copy, nonatomic) NSString *originPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stickerConfigJSONTransformer;
+ (id)filterConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
