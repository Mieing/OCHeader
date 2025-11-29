@class NSString;

@interface InteractGiftData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *secGiftId;
@property (copy, nonatomic) NSString *giftName;
@property (nonatomic) long long giftValue;
@property (copy, nonatomic) NSString *giftIcon;

+ (id)descriptor;

@end
