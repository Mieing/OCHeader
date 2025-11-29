@class NSString, IESECURLModel, IESECGoodsPrice, NSArray, AWEAwemeGoodsExtra;

@interface AWEAwemeGoodsInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descriptionString;
@property (retain, nonatomic) IESECURLModel *cover;
@property (retain, nonatomic) IESECGoodsPrice *price;
@property (retain, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSString *goodsSchema;
@property (copy, nonatomic) NSString *promotionID;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *KOLID;
@property (copy, nonatomic) NSString *secKOLID;
@property (copy, nonatomic) NSString *recommendInfo;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *shopID;
@property (copy, nonatomic) NSString *secShopID;
@property (copy, nonatomic) NSString *shareURL;
@property (nonatomic) unsigned long long visitorCount;
@property (nonatomic) unsigned long long promotionSource;
@property (retain, nonatomic) AWEAwemeGoodsExtra *extra;
@property (nonatomic) unsigned long long sales;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
