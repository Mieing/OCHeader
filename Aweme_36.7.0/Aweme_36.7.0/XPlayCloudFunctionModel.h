@interface XPlayCloudFunctionModel : NSObject

@property (nonatomic) long long uploadImage;
@property (nonatomic) long long downloadImage;
@property (nonatomic) long long downloadVideo;

+ (id)modelCustomPropertyMapper;
+ (unsigned long long)modelCustomMappingOptions;

@end
