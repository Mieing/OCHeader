@class NSString, IESECTextStyle;

@interface IESECPriceFontStyle : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECTextStyle *integerFontStyle;
@property (retain, nonatomic) IESECTextStyle *decimalFontStyle;
@property (retain, nonatomic) IESECTextStyle *priceTagFontStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
