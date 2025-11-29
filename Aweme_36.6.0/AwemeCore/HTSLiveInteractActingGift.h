@class NSString;

@interface HTSLiveInteractActingGift : IESLivePBBaseMessage

@property (nonatomic) long long giftId;
@property (copy, nonatomic) NSString *giftName;

+ (id)descriptor;

@end
