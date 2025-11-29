@class NSString;

@interface GameGiftInfoItem : IESLivePBBaseMessage

@property (nonatomic) long long giftId;
@property (copy, nonatomic) NSString *rankListURL;

+ (id)descriptor;

@end
