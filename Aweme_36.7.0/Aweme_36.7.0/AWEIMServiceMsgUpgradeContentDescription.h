@class NSString, AWEIMServiceMsgUpgradeContentShowTips;

@interface AWEIMServiceMsgUpgradeContentDescription : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *lightIcon;
@property (copy, nonatomic) NSString *darkIcon;
@property (retain, nonatomic) AWEIMServiceMsgUpgradeContentShowTips *showTips;

+ (id)showTipsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
