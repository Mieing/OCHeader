@class NSArray;

@interface AWESchoolNearResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *schoolList;

+ (id)schoolListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
