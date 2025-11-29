@class NSString;

@interface AWEECEcomOpenPublishParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *videoUrl;
@property (copy, nonatomic) NSString *posterUrl;
@property (copy, nonatomic) NSString *role;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
