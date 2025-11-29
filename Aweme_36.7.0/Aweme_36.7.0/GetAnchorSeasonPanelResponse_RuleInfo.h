@class NSString;

@interface GetAnchorSeasonPanelResponse_RuleInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *ruleTitle;
@property (copy, nonatomic) NSString *ruleSubTitle;
@property (copy, nonatomic) NSString *ruleContent;
@property (copy, nonatomic) NSString *fontColor;

+ (id)descriptor;

@end
