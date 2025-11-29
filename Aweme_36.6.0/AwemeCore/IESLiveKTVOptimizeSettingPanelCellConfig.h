@class NSString;

@interface IESLiveKTVOptimizeSettingPanelCellConfig : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ action;
@property (copy, nonatomic) id /* block */ ruleButtonAction;
@property (nonatomic) BOOL hideRuleButton;
@property (nonatomic) BOOL isOn;

- (void).cxx_destruct;

@end
