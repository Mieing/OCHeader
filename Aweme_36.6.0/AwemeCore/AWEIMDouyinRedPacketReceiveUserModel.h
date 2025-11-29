@class NSString, NSNumber;

@interface AWEIMDouyinRedPacketReceiveUserModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *avatar;
@property (nonatomic) BOOL isBest;
@property (nonatomic) long long amount;
@property (nonatomic) long long receiveTime;
@property (nonatomic) long long rewardAmount;
@property (copy, nonatomic) NSString *uid;
@property (nonatomic) long long sendAmount;
@property (copy, nonatomic) NSString *sendTitle;
@property (copy, nonatomic) NSString *sendEmoji;
@property (copy, nonatomic) NSString *recvFromUid;
@property (nonatomic) long long participateTime;
@property (retain, nonatomic) NSNumber *isFans;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
