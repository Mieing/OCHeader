@class NSString;

@interface IESLiveAnchorHomelandUpgradeInfo : IESLivePBBaseMessage

@property (nonatomic) int current;
@property (nonatomic) int total;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *progressGradientColor;
@property (copy, nonatomic) NSString *progressBgColor;

+ (id)descriptor;

@end
