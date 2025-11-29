@class NSString;

@interface HTSLiveWaitChestOpenInfo_AchieveTaskUser : IESLivePBBaseMessage

@property (nonatomic) long long userId;
@property (nonatomic) long long descIdx;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *userOpenId;

+ (id)descriptor;

@end
