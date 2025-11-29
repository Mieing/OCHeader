@class NSString;

@interface AWECodeGenSicilyImageModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *uri;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (copy, nonatomic) NSString *longitude;
@property (copy, nonatomic) NSString *latitude;
@property (copy, nonatomic) NSString *insertShootPositionId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
