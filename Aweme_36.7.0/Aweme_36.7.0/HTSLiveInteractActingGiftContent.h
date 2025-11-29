@class NSString, HTSLiveImage;

@interface HTSLiveInteractActingGiftContent : IESLivePBBaseMessage

@property (nonatomic) long long giftId;
@property (copy, nonatomic) NSString *giftName;
@property (nonatomic) long long giftDiamondCount;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;

+ (id)descriptor;

@end
