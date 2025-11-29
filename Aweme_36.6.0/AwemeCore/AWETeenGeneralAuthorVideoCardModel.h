@class NSArray, AWEUserModel, NSMutableDictionary;

@interface AWETeenGeneralAuthorVideoCardModel : AWEBaseApiModel

@property (retain, nonatomic) AWEUserModel *author;
@property (copy, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSMutableDictionary *trackParams;

+ (id)awemeListJSONTransformer;
+ (id)authorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
