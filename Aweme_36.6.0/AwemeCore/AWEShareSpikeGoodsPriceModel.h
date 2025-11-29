@class NSNumber, NSString;

@interface AWEShareSpikeGoodsPriceModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *sharePrice;
@property (retain, nonatomic) NSNumber *originPrice;
@property (copy, nonatomic) NSString *desc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
