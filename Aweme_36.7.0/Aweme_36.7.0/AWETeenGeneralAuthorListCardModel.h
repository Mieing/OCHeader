@class NSArray, NSMutableDictionary;

@interface AWETeenGeneralAuthorListCardModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *authorList;
@property (retain, nonatomic) NSMutableDictionary *trackParams;

+ (id)authorListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
