@class NSString, NSMutableArray;

@interface AnchorLinkerInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *userInfoArray;
@property (readonly, nonatomic) unsigned long long userInfoArray_Count;
@property (nonatomic) long long linkerId;
@property (nonatomic) long long linkerStatus;
@property (copy, nonatomic) NSString *activityMasterOpenid;
@property (retain, nonatomic) NSMutableArray *rewardInfoArray;
@property (readonly, nonatomic) unsigned long long rewardInfoArray_Count;
@property (copy, nonatomic) NSString *curReward;
@property (nonatomic) long long masterStatus;

+ (id)descriptor;

@end
