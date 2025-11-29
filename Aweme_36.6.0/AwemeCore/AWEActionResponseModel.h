@class NSString, IESIMURLModel;

@interface AWEActionResponseModel : IESIMBaseApiModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) IESIMURLModel *imageURI;
@property (copy, nonatomic) IESIMURLModel *imageURILight;

+ (id)imageURIJSONTransformer;
+ (id)imageURILightJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
