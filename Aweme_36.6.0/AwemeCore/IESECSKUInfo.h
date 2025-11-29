@class NSString, NSArray, IESECURLModel, NSDictionary, IESECSKUNewPriceModel, IESECSKUCarAdaptModel, NSNumber, IESECSKUButtonTipModel;

@interface IESECSKUInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *skuId;
@property (retain, nonatomic) NSNumber *stockNum;
@property (retain, nonatomic) NSNumber *price;
@property (copy, nonatomic) NSString *priceHeader;
@property (retain, nonatomic) NSNumber *priceHeaderStyle;
@property (copy, nonatomic) NSString *secondBonusText;
@property (retain, nonatomic) NSNumber *originPrice;
@property (retain, nonatomic) NSNumber *marketPrice;
@property (retain, nonatomic) NSNumber *userLimit;
@property (retain, nonatomic) NSNumber *unpayNum;
@property (retain, nonatomic) NSNumber *userMinLimit;
@property (copy, nonatomic) NSString *limitToast;
@property (copy, nonatomic) NSString *minLimitToast;
@property (copy, nonatomic) NSString *limitText;
@property (copy, nonatomic) NSString *stockDesc;
@property (retain, nonatomic) NSNumber *nowStock;
@property (retain, nonatomic) NSString *promiseType;
@property (retain, nonatomic) NSDictionary *showEventParams;
@property (retain, nonatomic) NSNumber *discountPrice;
@property (copy, nonatomic) NSString *discountPriceHeader;
@property (retain, nonatomic) NSArray *couponTags;
@property (nonatomic) long long stype;
@property (retain, nonatomic) NSNumber *campaignStartTime;
@property (retain, nonatomic) NSNumber *campaignEndTime;
@property (retain, nonatomic) NSNumber *serverTime;
@property (copy, nonatomic) NSDictionary *additionModulesData;
@property (retain, nonatomic) IESECURLModel *activityIcon;
@property (copy, nonatomic) NSString *atmosphereText;
@property (retain, nonatomic) NSNumber *depositPrice;
@property (nonatomic) long long campaignSubType;
@property (copy, nonatomic) NSString *buttonLabel;
@property (nonatomic) BOOL canSelect;
@property (copy, nonatomic) NSArray *buttons;
@property (retain, nonatomic) IESECSKUCarAdaptModel *carAdapt;
@property (nonatomic) long long atmosphere;
@property (retain, nonatomic) IESECSKUNewPriceModel *minPriceModel;
@property (retain, nonatomic) IESECSKUNewPriceModel *discountPriceModel;
@property (retain, nonatomic) IESECSKUNewPriceModel *regularPriceModel;
@property (retain, nonatomic) IESECSKUNewPriceModel *rangePriceModel;
@property (retain, nonatomic) NSNumber *priceType;
@property (copy, nonatomic) NSString *skuAppointExtra;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *skuDesc;
@property (copy, nonatomic) NSString *skuDescBGColor;
@property (copy, nonatomic) NSString *skuDescFontColor;
@property (nonatomic) BOOL canAddCart;
@property (retain, nonatomic) IESECSKUButtonTipModel *buttonTip;
@property (nonatomic) BOOL hideTradeIn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonsJSONTransformer;
+ (id)couponTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
