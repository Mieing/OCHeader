@class NSNumber, NSString;

@interface AWEGoodsPriceInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *originPrice;
@property (retain, nonatomic) NSNumber *effectiveMinPrice;
@property (retain, nonatomic) NSNumber *effectiveMaxPrice;
@property (copy, nonatomic) NSString *priceTrackingInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
