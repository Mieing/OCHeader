@class NSArray;

@interface AWEBindGameAccountListResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *bindGameAccountList;

+ (id)bindGameAccountListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
