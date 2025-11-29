@class NSArray;

@interface AWELVideoLibraryFilterResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *searchTypeList;

+ (id)searchTypeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
