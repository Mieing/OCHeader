@class NSNumber, NSArray, NSString;

@interface IESLiveGiftTraySlideRateHotConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *hotLevel;
@property (retain, nonatomic) NSArray *priceConfigs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)priceConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
