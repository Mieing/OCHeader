@class NSString, HTSLiveImage;

@interface SingleTimeLimitPkThemeInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *pkTheme;
@property (nonatomic) long long giftId;
@property (retain, nonatomic) HTSLiveImage *giftIcon;
@property (nonatomic) BOOL hasGiftIcon;
@property (nonatomic) long long pkScore;
@property (copy, nonatomic) NSString *giftName;
@property (nonatomic) long long themeEnum;

+ (id)descriptor;

@end
