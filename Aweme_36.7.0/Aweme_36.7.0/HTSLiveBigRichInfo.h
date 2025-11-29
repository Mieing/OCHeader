@class NSString, HTSLiveImage, HTSLiveUser;

@interface HTSLiveBigRichInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long sendTime;
@property (nonatomic) long long giftId;
@property (nonatomic) long long giftCount;
@property (retain, nonatomic) HTSLiveImage *giftIcon;
@property (nonatomic) BOOL hasGiftIcon;
@property (copy, nonatomic) NSString *giftName;
@property (nonatomic) long long score;
@property (copy, nonatomic) NSString *memberId;
@property (copy, nonatomic) NSString *orderId;

+ (id)descriptor;

@end
