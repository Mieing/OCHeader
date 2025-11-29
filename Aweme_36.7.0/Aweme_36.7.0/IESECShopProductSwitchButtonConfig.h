@class NSString, IESECURLModel, IESECShopProductSwitchButtonBubbleConfig;

@interface IESECShopProductSwitchButtonConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) long long fontSize;
@property (nonatomic) long long fontWeight;
@property (retain, nonatomic) IESECURLModel *icon;
@property (copy, nonatomic) NSString *selectParams;
@property (retain, nonatomic) IESECShopProductSwitchButtonBubbleConfig *bubbleConfig;
@property (nonatomic) BOOL forceSelected;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
