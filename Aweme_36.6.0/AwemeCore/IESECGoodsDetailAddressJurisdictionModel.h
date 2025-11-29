@class NSString;

@interface IESECGoodsDetailAddressJurisdictionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *jurisdictionName;
@property (retain, nonatomic) NSString *jurisdictionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
