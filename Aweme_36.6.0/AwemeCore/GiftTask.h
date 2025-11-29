@class NSString;

@interface GiftTask : IESLivePBBaseMessage

@property (nonatomic) long long taskType;
@property (nonatomic) long long expireTime;
@property (copy, nonatomic) NSString *iconUrls;
@property (copy, nonatomic) NSString *giftDesc;
@property (nonatomic) long long giftId;
@property (copy, nonatomic) NSString *rewardDesc;
@property (copy, nonatomic) NSString *buttonTxt;
@property (copy, nonatomic) NSString *giftGuideURL;
@property (copy, nonatomic) NSString *iconName;

+ (id)descriptor;

@end
