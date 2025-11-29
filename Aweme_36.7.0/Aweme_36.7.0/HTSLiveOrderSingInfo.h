@interface HTSLiveOrderSingInfo : IESLivePBBaseMessage

@property (nonatomic) long long giftId;
@property (nonatomic) int orderSingAutoEnlarge;
@property (nonatomic) long long auditionGiftId;
@property (nonatomic) BOOL showGiftInfo;
@property (nonatomic) BOOL aiLyricsSwitchOn;

+ (id)descriptor;

@end
