@class IESECShopDecorationModelV1, NSDictionary, NSString, IESECShopDecorationModelV2;

@interface IESECShopDecorationWrapper : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long moduleType;
@property (retain, nonatomic) IESECShopDecorationModelV1 *decorationV1;
@property (retain, nonatomic) IESECShopDecorationModelV2 *decorationV2;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
