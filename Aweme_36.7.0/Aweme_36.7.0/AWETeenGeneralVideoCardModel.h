@class NSMutableDictionary, AWEAwemeModel;

@interface AWETeenGeneralVideoCardModel : AWEBaseApiModel

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSMutableDictionary *trackParams;

+ (id)awemeModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
