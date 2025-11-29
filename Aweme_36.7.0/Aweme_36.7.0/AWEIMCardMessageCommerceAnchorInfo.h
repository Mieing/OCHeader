@class NSString, NSArray, NSDictionary, NSNumber;

@interface AWEIMCardMessageCommerceAnchorInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *channelId;
@property (retain, nonatomic) NSNumber *channelType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSString *image;
@property (retain, nonatomic) NSNumber *price;
@property (copy, nonatomic) NSString *elasticTitle;
@property (copy, nonatomic) NSString *titleTag;
@property (copy, nonatomic) NSString *icon;
@property (retain, nonatomic) NSNumber *realPrice;
@property (copy, nonatomic) NSString *priceDescribe;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
