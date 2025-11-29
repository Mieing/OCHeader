@class NSString, NSMutableArray;

@interface HTSLiveAuctionSettleMessageExtra : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *imType;
@property (retain, nonatomic) NSMutableArray *topUserIdsArray;
@property (readonly, nonatomic) unsigned long long topUserIdsArray_Count;
@property (nonatomic) long long entryPrice;
@property (nonatomic) long long topPrice;
@property (nonatomic) long long participateNum;
@property (retain, nonatomic) NSMutableArray *rewardUserInfoArray;
@property (readonly, nonatomic) unsigned long long rewardUserInfoArray_Count;
@property (retain, nonatomic) NSMutableArray *topUserOpenIdsArray;
@property (readonly, nonatomic) unsigned long long topUserOpenIdsArray_Count;

+ (id)descriptor;

@end
