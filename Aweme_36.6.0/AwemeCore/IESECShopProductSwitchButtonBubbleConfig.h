@class NSString, NSDictionary;

@interface IESECShopProductSwitchButtonBubbleConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) long long fontSize;
@property (nonatomic) long long fontWeight;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSDictionary *freqCtrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
