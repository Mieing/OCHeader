@class NSString, IESECURLModel, NSDictionary, IESECShopTextLabelItem, IESECShopCartControlModel;

@interface IESECShopCartModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *icon;
@property (retain, nonatomic) IESECShopTextLabelItem *bottomLabel;
@property (retain, nonatomic) IESECShopTextLabelItem *slideLabel;
@property (retain, nonatomic) IESECURLModel *productImage;
@property (copy, nonatomic) NSString *cartSchema;
@property (retain, nonatomic) IESECShopCartControlModel *control;
@property (copy, nonatomic) NSDictionary *bizExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
