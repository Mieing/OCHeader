@class NSString, AWEURLModel;

@interface AWEShareSchemaCircleModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *circleID;
@property (retain, nonatomic) AWEURLModel *coverURL;

+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
