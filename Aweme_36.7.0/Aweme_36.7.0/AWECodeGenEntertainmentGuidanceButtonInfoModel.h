@class AWECodeGenEntertainmentGuidanceButtonSwitchConfigModel, AWECodeGenEntertainmentButtonInfoModel;

@interface AWECodeGenEntertainmentGuidanceButtonInfoModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenEntertainmentButtonInfoModel *buttonInfoModel;
@property (retain, nonatomic) AWECodeGenEntertainmentGuidanceButtonSwitchConfigModel *switchConfigModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
