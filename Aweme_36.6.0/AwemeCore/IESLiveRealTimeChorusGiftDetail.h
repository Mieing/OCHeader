@class NSString;

@interface IESLiveRealTimeChorusGiftDetail : IESLivePBBaseMessage

@property (nonatomic) long long giftId;
@property (nonatomic) long long giftType;
@property (copy, nonatomic) NSString *giftName;
@property (nonatomic) long long giftDiamondCount;
@property (copy, nonatomic) NSString *icon;

+ (id)descriptor;

@end
