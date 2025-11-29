@class NSString, HTSLiveImage;

@interface HTSLiveDesireGiftBriefInfo : IESLivePBBaseMessage

@property (nonatomic) long long giftId;
@property (copy, nonatomic) NSString *giftIdStr;
@property (copy, nonatomic) NSString *giftName;
@property (retain, nonatomic) HTSLiveImage *giftIcon;
@property (nonatomic) BOOL hasGiftIcon;
@property (nonatomic) long long diamondCount;
@property (nonatomic) int giftType;

+ (id)descriptor;

@end
