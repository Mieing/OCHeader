@class NSArray, AWEMixVideoModel;

@interface AWESearchMixVideoModel : AWEBaseApiModel

@property (retain, nonatomic) AWEMixVideoModel *mixInfo;
@property (retain, nonatomic) NSArray *mixItemsList;

+ (id)mixInfoJSONTransformer;
+ (id)mixItemsListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
