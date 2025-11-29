@class NSString;

@interface MultiTalkGroupMemberItem : MMObject <PBCoding>

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *inviteUserName;
@property (nonatomic) int status;
@property (nonatomic) int reason;
@property (nonatomic) long long inviteTime;
@property (nonatomic) int holdStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_inviteUserName;
+ (void)PBArrayAdd_status;
+ (void)PBArrayAdd_reason;
+ (void)PBArrayAdd_inviteTime;
+ (void)PBArrayAdd_holdStatus;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
