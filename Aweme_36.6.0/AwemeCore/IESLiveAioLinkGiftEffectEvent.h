@interface IESLiveAioLinkGiftEffectEvent : IESLivePBBaseMessage

@property (nonatomic) long long giftId;
@property (nonatomic) int eventType;

+ (id)descriptor;

@end
