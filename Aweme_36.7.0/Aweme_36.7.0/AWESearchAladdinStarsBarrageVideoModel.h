@class NSArray, AWEAwemeModel;

@interface AWESearchAladdinStarsBarrageVideoModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *itemList;
@property (readonly, nonatomic) AWEAwemeModel *videoModel;

+ (id)itemListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
