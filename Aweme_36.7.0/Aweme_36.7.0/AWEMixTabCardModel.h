@class NSArray, AWEMixVideoModel;

@interface AWEMixTabCardModel : AWEBaseApiModel

@property (retain, nonatomic) AWEMixVideoModel *mixInfo;
@property (retain, nonatomic) NSArray *list;

+ (id /* block */)isEqualBlock;
+ (id)mixInfoJSONTransformer;
+ (id)listJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
