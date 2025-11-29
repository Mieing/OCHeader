@class NSString, NSNumber;

@interface IESECLiveSlicePriceLabelViewPriceModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSNumber *priceNum;
@property (copy, nonatomic) NSString *priceStr;
@property (copy, nonatomic) NSString *suffix;
@property (copy, nonatomic) NSNumber *strikethrough;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
