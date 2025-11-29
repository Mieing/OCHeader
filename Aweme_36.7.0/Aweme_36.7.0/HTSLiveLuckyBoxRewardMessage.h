@class NSString, HTSLiveCommon, NSMutableArray;

@interface HTSLiveLuckyBoxRewardMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long boxId;
@property (copy, nonatomic) NSString *boxIdStr;
@property (retain, nonatomic) NSMutableArray *rewardedUserIdArray;
@property (readonly, nonatomic) unsigned long long rewardedUserIdArray_Count;
@property (retain, nonatomic) NSMutableArray *rewardedDetailArray;
@property (readonly, nonatomic) unsigned long long rewardedDetailArray_Count;
@property (nonatomic) long long rewardMessageType;
@property (copy, nonatomic) NSString *relatedItemId;

+ (id)descriptor;

@end
