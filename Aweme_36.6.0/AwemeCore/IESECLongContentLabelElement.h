@class IESECBackgroundDescribeInfo, IESECMultiCouponButtonElement, NSString, IESECMultiTextWithIconElement, IESECMultiGradientLongTitleElement, IESECGoodsDetailLynxCardElement, NSArray;

@interface IESECLongContentLabelElement : IESECBasicElement

@property (retain, nonatomic) IESECMultiTextWithIconElement *multiTextWithIconElement;
@property (retain, nonatomic) IESECMultiCouponButtonElement *multiCouponButtonElement;
@property (retain, nonatomic) IESECMultiGradientLongTitleElement *multiGradientLongTitleElement;
@property (retain, nonatomic) IESECMultiTextWithIconElement *multiTailIconsLabelElement;
@property (retain, nonatomic) IESECBackgroundDescribeInfo *background;
@property (copy, nonatomic) NSString *jumpURL;
@property (retain, nonatomic) IESECGoodsDetailLynxCardElement *lynxCardElement;
@property (copy, nonatomic) NSArray *otherStates;
@property (nonatomic) BOOL shouldHideOutBoundsView;
@property (nonatomic) BOOL shouldBreakLine;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) BOOL isHide;

+ (id)otherStatesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
