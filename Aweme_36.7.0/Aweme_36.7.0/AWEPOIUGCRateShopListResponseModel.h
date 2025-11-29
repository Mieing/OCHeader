@class NSString, NSDictionary, NSArray;

@interface AWEPOIUGCRateShopListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *extraMsgString;
@property (copy, nonatomic) NSDictionary *extraMsg;
@property (retain, nonatomic) NSArray *shopList;
@property (nonatomic) long long shopCursor;
@property (nonatomic) long long shopTotal;
@property (retain, nonatomic) NSArray *brandList;
@property (nonatomic) long long brandCursor;
@property (nonatomic) long long brandTotal;
@property (nonatomic) unsigned long long barType;
@property (nonatomic) BOOL hasMore;
@property (readonly, nonatomic) BOOL isNewStyle;

+ (id)shopListJSONTransformer;
+ (id)brandListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)cursor;
- (void).cxx_destruct;
- (long long)total;
- (id)itemList;

@end
