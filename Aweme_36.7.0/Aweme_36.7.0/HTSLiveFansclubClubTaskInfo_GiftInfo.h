@class HTSLiveImage;

@interface HTSLiveFansclubClubTaskInfo_GiftInfo : IESLivePBBaseMessage

@property (nonatomic) long long giftId;
@property (nonatomic) long long diamondCount;
@property (retain, nonatomic) HTSLiveImage *giftIcon;
@property (nonatomic) BOOL hasGiftIcon;

+ (id)descriptor;

@end
