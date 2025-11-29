@class IESECLiveGoodsPriceShowPrice, IESECLiveGoodsPriceShowText, IESECLiveGoodsPriceCountDown, NSString;

@interface IESECLiveGoodsPriceModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long priceType;
@property (retain, nonatomic) IESECLiveGoodsPriceShowPrice *showPrice;
@property (retain, nonatomic) IESECLiveGoodsPriceCountDown *countDown;
@property (retain, nonatomic) IESECLiveGoodsPriceShowText *showText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
