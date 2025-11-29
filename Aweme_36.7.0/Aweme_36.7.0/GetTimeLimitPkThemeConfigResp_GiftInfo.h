@class NSString, HTSLiveImage;

@interface GetTimeLimitPkThemeConfigResp_GiftInfo : IESLivePBBaseMessage

@property (nonatomic) long long giftId;
@property (copy, nonatomic) NSString *giftName;
@property (nonatomic) long long giftScore;
@property (retain, nonatomic) HTSLiveImage *giftIcon;
@property (nonatomic) BOOL hasGiftIcon;

+ (id)descriptor;

@end
