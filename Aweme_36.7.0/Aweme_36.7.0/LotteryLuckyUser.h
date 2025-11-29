@class NSString, NSMutableArray, LotteryLuckyUser_Award;

@interface LotteryLuckyUser : IESLivePBBaseMessage

@property (nonatomic) long long luckyId;
@property (nonatomic) long long lotteryId;
@property (nonatomic) long long roomId;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *userIdStr;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *avatarURL;
@property (nonatomic) long long grantCount;
@property (copy, nonatomic) NSString *userExtraInfo;
@property (copy, nonatomic) NSString *orderInfo;
@property (copy, nonatomic) NSString *secUserId;
@property (nonatomic) long long prizeType;
@property (copy, nonatomic) NSString *prizeName;
@property (copy, nonatomic) NSString *bizPayload;
@property (nonatomic) long long expireTime;
@property (retain, nonatomic) NSMutableArray *voucherPrizeListArray;
@property (readonly, nonatomic) unsigned long long voucherPrizeListArray_Count;
@property (nonatomic) BOOL useNewAward;
@property (retain, nonatomic) LotteryLuckyUser_Award *award;
@property (nonatomic) BOOL hasAward;
@property (copy, nonatomic) NSString *extraAwardWinPageBizData;

+ (id)descriptor;

@end
