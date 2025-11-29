@class IESLiveAioLinkNormalizedRect;

@interface IESLiveAioLinkGiftTrayEvent : IESLivePBBaseMessage

@property (nonatomic) long long giftId;
@property (retain, nonatomic) IESLiveAioLinkNormalizedRect *giftIconRect;
@property (nonatomic) BOOL hasGiftIconRect;

+ (id)descriptor;

@end
