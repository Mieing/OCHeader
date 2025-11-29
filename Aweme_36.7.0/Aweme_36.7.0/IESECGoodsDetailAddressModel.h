@class NSString, IESECGoodsDetailAddressJurisdictionModel;

@interface IESECGoodsDetailAddressModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *addressID;
@property (copy, nonatomic) NSString *addressDetail;
@property (copy, nonatomic) NSString *mobilePhone;
@property (copy, nonatomic) NSString *receiverName;
@property (retain, nonatomic) IESECGoodsDetailAddressJurisdictionModel *province;
@property (retain, nonatomic) IESECGoodsDetailAddressJurisdictionModel *city;
@property (retain, nonatomic) IESECGoodsDetailAddressJurisdictionModel *town;
@property (copy, nonatomic) NSString *addressTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
