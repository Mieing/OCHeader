@interface XPlayCloudPermissionModel : NSObject

@property (nonatomic) long long Location;
@property (nonatomic) long long camera;

+ (id)modelCustomPropertyMapper;
+ (unsigned long long)modelCustomMappingOptions;

@end
