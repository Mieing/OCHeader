@class IESECPriceFontStyle, IESECGoodsPriceInfoModel, NSString, IESECTextElement;

@interface IESECPriceElement : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECTextElement *prefix;
@property (retain, nonatomic) IESECGoodsPriceInfoModel *priceInfo;
@property (retain, nonatomic) IESECPriceFontStyle *priceFont;
@property (nonatomic) BOOL isStrikethrough;
@property (retain, nonatomic) IESECTextElement *suffix;
@property (nonatomic) BOOL hasComma;
@property (nonatomic) unsigned long long priceType;
@property (nonatomic) unsigned long long discountBGType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
