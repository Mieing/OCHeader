@class NSString;

@interface AWEECMallFeedPriceModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (nonatomic) long long minPrice;
@property (nonatomic) long long maxPrice;
@property (nonatomic) long long marketPrice;
@property (copy, nonatomic) NSString *typeText;
@property (nonatomic) long long originalPrice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
