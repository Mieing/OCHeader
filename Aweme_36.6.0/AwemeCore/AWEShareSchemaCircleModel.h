@class NSString, AWEURLModel;

@interface AWEShareSchemaCircleModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *circleID;
@property (copy, nonatomic) NSString *circleName;
@property (retain, nonatomic) AWEURLModel *coverURL;

+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
