@class NSString, NSArray;

@interface AWEIMRecommendFansGroupModel : IESIMBaseApiModel

@property (nonatomic) long long groupId;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupOwnerName;
@property (nonatomic) long long groupOwnerId;
@property (copy, nonatomic) NSString *groupOwnerSecUid;
@property (copy, nonatomic) NSString *groupIcon;
@property (nonatomic) long long groupMemberCount;
@property (nonatomic) unsigned long long joinStatus;
@property (nonatomic) BOOL needCut;
@property (copy, nonatomic) NSArray *groupTags;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
