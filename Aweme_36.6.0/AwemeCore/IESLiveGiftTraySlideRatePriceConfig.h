@class NSArray, NSNumber, NSString;

@interface IESLiveGiftTraySlideRatePriceConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *priceRange;
@property (retain, nonatomic) NSNumber *slideRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
