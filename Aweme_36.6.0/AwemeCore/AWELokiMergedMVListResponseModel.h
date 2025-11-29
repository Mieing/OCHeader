@class NSArray;

@interface AWELokiMergedMVListResponseModel : ACCBaseApiModel

@property (copy, nonatomic) NSArray *data;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
