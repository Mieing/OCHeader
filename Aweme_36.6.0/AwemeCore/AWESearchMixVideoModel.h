@class NSArray, AWEMixVideoModel;

@interface AWESearchMixVideoModel : AWEBaseApiModel

@property (retain, nonatomic) AWEMixVideoModel *mixInfo;
@property (retain, nonatomic) NSArray *mixItemsList;
@property (retain, nonatomic) NSArray *mixMoreIds;

+ (id)mixInfoJSONTransformer;
+ (id)mixItemsListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
