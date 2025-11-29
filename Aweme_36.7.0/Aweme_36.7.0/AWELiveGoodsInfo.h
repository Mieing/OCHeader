@class NSDictionary, NSString, NSArray;

@interface AWELiveGoodsInfo : AWEBaseApiModel

@property (copy, nonatomic) NSDictionary *MarkInfo;
@property (copy, nonatomic) NSDictionary *ItemIcon;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *itemSKU;
@property (nonatomic) long long itemType;
@property (copy, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSArray *imageURLs;
@property (copy, nonatomic) NSDictionary *platformPriceList;
@property (nonatomic) long long itemSaleType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
