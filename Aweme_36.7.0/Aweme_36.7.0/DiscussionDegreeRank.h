@class UserBasicInfo;

@interface DiscussionDegreeRank : IESLivePBBaseMessage

@property (retain, nonatomic) UserBasicInfo *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long index;
@property (nonatomic) long long score;
@property (nonatomic) long long siblingDelta;

+ (id)descriptor;

@end
