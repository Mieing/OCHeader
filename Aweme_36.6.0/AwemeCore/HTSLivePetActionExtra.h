@class NSString, HTSLiveUser;

@interface HTSLivePetActionExtra : IESLivePBBaseMessage

@property (nonatomic) long long giftId;
@property (copy, nonatomic) NSString *moveTrack;
@property (nonatomic) BOOL isPk;
@property (copy, nonatomic) NSString *anchorId;
@property (nonatomic) BOOL isPkWinner;
@property (nonatomic) long long giftCount;
@property (retain, nonatomic) HTSLiveUser *userInfo;
@property (nonatomic) BOOL hasUserInfo;
@property (copy, nonatomic) NSString *anchorOpenId;

+ (id)descriptor;

@end
