@class NSString, IESECGoodsDetailCountryItemModel, IESECGoodsTaxDescribeModel;

@interface IESECGoodsDetailAboardInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long customsType;
@property (nonatomic) unsigned long long priceTaxType;
@property (copy, nonatomic) NSString *taxText;
@property (retain, nonatomic) IESECGoodsTaxDescribeModel *taxDetail;
@property (copy, nonatomic) NSString *wareHouseName;
@property (retain, nonatomic) IESECGoodsDetailCountryItemModel *brandCountryItem;
@property (retain, nonatomic) IESECGoodsDetailCountryItemModel *sourceCountryItem;
@property (copy, nonatomic) NSString *originPlaceText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
