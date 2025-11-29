@class UIColor, IESGCPPBGameDetailScoreInfo, NSString;

@interface IESGCPDetailTitleScoreInfoViewModel : IESGCPDetailBaseViewModel

@property (retain, nonatomic) IESGCPPBGameDetailScoreInfo *info;
@property (readonly, nonatomic) UIColor *scoreTextColor;
@property (readonly, nonatomic) NSString *starImageName;

- (id)v4ScoreInfoThemeConfig;
- (long long)scoreInfoThemeFrom:(long long)a0;
- (void).cxx_destruct;
- (void)setContent:(id)a0;

@end
