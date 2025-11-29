@class NSNumber, NSString;

@interface IESECLiveGoodsMinPrice : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *price;
@property (copy, nonatomic) NSString *suffix;
@property (copy, nonatomic) NSString *hidePrice;
@property (nonatomic) BOOL enableAdaptSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
