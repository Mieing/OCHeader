@class AWECodeGenEntGoldCoinAnimationConfigModel, NSString, AWECodeGenEntertainmentButtonSwitchConfigModel, AWECodeGenEntButtonHighlightConfigModel;

@interface AWECodeGenEntertainmentButtonInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *richText;
@property (nonatomic) long long combineType;
@property (copy, nonatomic) NSString *textColor;
@property (retain, nonatomic) AWECodeGenEntertainmentButtonSwitchConfigModel *guideWatchAllSwitchConfigModel;
@property (retain, nonatomic) AWECodeGenEntGoldCoinAnimationConfigModel *goldCoinAnimationConfigModel;
@property (retain, nonatomic) AWECodeGenEntButtonHighlightConfigModel *highlightConfigModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
