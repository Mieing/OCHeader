@class NSString;

@interface GetSingleTimeLimitPkThemeConfigResp_ThemeInfo : IESLivePBBaseMessage

@property (nonatomic) long long themeEnum;
@property (copy, nonatomic) NSString *themeName;

+ (id)descriptor;

@end
