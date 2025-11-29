@class AWENewHotSpotFeedItem, AWENewHotSpotLynxPrerenderModel, NSDictionary;

@interface AWENewHotSpotFeedCardModel : AWEBaseApiModel

@property (retain, nonatomic) AWENewHotSpotFeedItem *itemModel;
@property (retain, nonatomic) AWENewHotSpotLynxPrerenderModel *renderModel;
@property (nonatomic) long long cardType;
@property (retain, nonatomic) NSDictionary *extraDict;

+ (id)cardTypeJSONTransformer;
+ (id)itemModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
