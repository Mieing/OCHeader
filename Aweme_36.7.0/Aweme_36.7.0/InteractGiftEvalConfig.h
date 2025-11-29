@class NSString, HTSLiveImage;

@interface InteractGiftEvalConfig : IESLivePBBaseMessage

@property (nonatomic) long long giftId;
@property (retain, nonatomic) HTSLiveImage *giftIcon;
@property (nonatomic) BOOL hasGiftIcon;
@property (copy, nonatomic) NSString *giftName;
@property (nonatomic) long long score;

+ (id)descriptor;

@end
