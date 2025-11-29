@class NSNumber, NSString;

@interface IESECLiveGoodsDepositModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *originPrice;
@property (retain, nonatomic) NSNumber *depositPrice;
@property (retain, nonatomic) NSString *depositDiscountDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
