@class NSString, IESECURLModel;

@interface IESECGoodsDetailCountryItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *countryID;
@property (copy, nonatomic) NSString *countryName;
@property (retain, nonatomic) IESECURLModel *countryIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
