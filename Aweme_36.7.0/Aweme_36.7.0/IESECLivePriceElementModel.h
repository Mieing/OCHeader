@class NSNumber, NSString;

@interface IESECLivePriceElementModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *priceNumber;
@property (nonatomic) double integerFont;
@property (nonatomic) double decimalFont;
@property (nonatomic) double dollarTagFont;
@property (retain, nonatomic) NSString *textColor;
@property (nonatomic) BOOL needBoldText;
@property (retain, nonatomic) NSNumber *maxWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
