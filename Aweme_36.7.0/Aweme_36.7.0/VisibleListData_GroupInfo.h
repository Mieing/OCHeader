@class NSString;

@interface VisibleListData_GroupInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *groupId;
@property (nonatomic) long long memberCount;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *avatarURL;

+ (id)descriptor;

@end
