@class NSString, HTSLiveImage;

@interface OpenGameGift : IESLivePBBaseMessage

@property (nonatomic) long long giftValue;
@property (copy, nonatomic) NSString *giftName;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;

+ (id)descriptor;

@end
