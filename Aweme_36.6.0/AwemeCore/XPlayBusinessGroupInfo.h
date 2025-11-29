@class NSString, NSArray;

@interface XPlayBusinessGroupInfo : NSObject <XPlayBusinessGroupInfo>

@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupDescription;
@property (copy, nonatomic) NSString *avatarUri;
@property (nonatomic) BOOL isJoined;
@property (nonatomic) int applyStatus;
@property (copy, nonatomic) NSArray *condition;
@property (copy, nonatomic) NSArray *tags;
@property (nonatomic) int memberCount;
@property (nonatomic) int maxMemberCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
