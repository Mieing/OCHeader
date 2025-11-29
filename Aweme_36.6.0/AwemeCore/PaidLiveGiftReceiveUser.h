@class HTSLiveUser;

@interface PaidLiveGiftReceiveUser : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *receiveUser;
@property (nonatomic) BOOL hasReceiveUser;
@property (nonatomic) long long receiveTime;

+ (id)descriptor;

@end
