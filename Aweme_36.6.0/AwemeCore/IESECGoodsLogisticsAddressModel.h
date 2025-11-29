@class NSString;

@interface IESECGoodsLogisticsAddressModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *addrId;
@property (copy, nonatomic) NSString *addrText;
@property (copy, nonatomic) NSString *addrBookURLString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
