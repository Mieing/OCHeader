@class NSArray, IESECGoodsDetailBottomDataConfig, IESECMultiTextWithIconElement, IESECTextWithIconElement, IESECSeparateLineElement, IESECGoodsDetailLynxCardElement;

@interface IESECGoodsDetailBottomDataModel : IESECBaseApiModel

@property (retain, nonatomic) IESECMultiTextWithIconElement *bottomItems;
@property (retain, nonatomic) NSArray *bottomButtons;
@property (retain, nonatomic) NSArray *bottomButtonsSmallMode;
@property (retain, nonatomic) IESECSeparateLineElement *buttonDivider;
@property (retain, nonatomic) IESECTextWithIconElement *tip;
@property (retain, nonatomic) IESECGoodsDetailLynxCardElement *supermarket;
@property (retain, nonatomic) IESECGoodsDetailLynxCardElement *lynxTip;
@property (retain, nonatomic) IESECGoodsDetailBottomDataConfig *bottomConfig;

+ (id)bottomButtonsJSONTransformer;
+ (id)bottomButtonsSmallModeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
