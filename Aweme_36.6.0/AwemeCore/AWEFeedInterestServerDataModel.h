@class NSArray;

@interface AWEFeedInterestServerDataModel : AWEBaseBizConfigModel

@property (readonly, copy, nonatomic) NSArray *interestPoints;
@property (readonly, copy, nonatomic) NSArray *itemList;
@property (readonly, copy, nonatomic) NSArray *preloadItemList;

+ (id)itemListJSONTransformer;
+ (id)preloadItemListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
