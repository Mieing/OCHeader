@class NSString, IESIMURLModel;

@interface AWEButtonStructModel : IESIMBaseApiModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) IESIMURLModel *imageURI;
@property (copy, nonatomic) IESIMURLModel *imageURILight;
@property (copy, nonatomic) NSString *reqValue;

+ (id)imageURIJSONTransformer;
+ (id)imageURILightJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
