@class NSString;

@interface IESLiveAudienceInteractiveSettingAuthorityItem : IESLiveDynamicModel

@property (nonatomic) long long cellType;
@property (nonatomic) BOOL initialSwitchValue;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ action;
@property (nonatomic) BOOL shouldShowMoreDetailButton;
@property (nonatomic) BOOL shouldShowReddot;
@property (copy, nonatomic) id /* block */ moreDetailAction;
@property (copy, nonatomic) id /* block */ clickIndicatorAction;
@property (nonatomic) int valueType;
@property (copy, nonatomic) NSString *indicatorDetailText;
@property (copy, nonatomic) id /* block */ detailUpdateBlock;
@property (copy, nonatomic) id /* block */ precheckAction;
@property (nonatomic) BOOL showSeparator;

- (void).cxx_destruct;

@end
