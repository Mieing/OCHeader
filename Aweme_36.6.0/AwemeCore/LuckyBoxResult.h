@class LuckyBoxExpandAward, NSString, LuckyBoxGiftGuide, HTSLiveImage, LuckyBoxBonus;

@interface LuckyBoxResult : IESLivePBBaseMessage

@property (nonatomic) BOOL succeed;
@property (nonatomic) long long boxId;
@property (nonatomic) int boxType;
@property (nonatomic) long long diamondCount;
@property (nonatomic) long long giftId;
@property (copy, nonatomic) NSString *giftName;
@property (nonatomic) long long cashCount;
@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) LuckyBoxExpandAward *expandAward;
@property (nonatomic) BOOL hasExpandAward;
@property (retain, nonatomic) LuckyBoxGiftGuide *giftGuide;
@property (nonatomic) BOOL hasGiftGuide;
@property (copy, nonatomic) NSString *boxIdStr;
@property (retain, nonatomic) LuckyBoxBonus *bonus;
@property (nonatomic) BOOL hasBonus;
@property (copy, nonatomic) NSString *bizExtra;

+ (id)descriptor;

@end
