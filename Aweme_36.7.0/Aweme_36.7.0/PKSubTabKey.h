@class NSString;

@interface PKSubTabKey : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (nonatomic) int groupRivalsType;
@property (nonatomic) long long flexActivityId;
@property (nonatomic) int inviteType;
@property (copy, nonatomic) NSString *activityId;

+ (id)descriptor;

@end
