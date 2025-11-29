@class NSString, NSArray;

@interface AWEIMFansGroupModel : IESIMBaseApiModel

@property (nonatomic) long long groupId;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupIcon;
@property (nonatomic) BOOL showStatus;
@property (nonatomic) long long groupMemberCount;
@property (copy, nonatomic) NSString *entryLimit;
@property (nonatomic) long long createTime;
@property (nonatomic) unsigned long long joinStatus;
@property (nonatomic) BOOL allowShow;
@property (nonatomic) BOOL needCut;
@property (copy, nonatomic) NSArray *groupTags;
@property (copy, nonatomic) NSString *pageUuid;
@property (copy, nonatomic) NSString *pageUuidForTrackShowJoinGroupCard;
@property (copy, nonatomic) NSString *pageUuidForTrackIMGroupApplyEntranceShow;
@property (copy, nonatomic) NSString *joinText;
@property (copy, nonatomic) NSString *groupDesc;
@property (copy, nonatomic) NSString *groupCreateType;
@property (copy, nonatomic) NSString *groupCategory;
@property (copy, nonatomic) NSString *groupTypeNew;
@property (copy, nonatomic) NSString *groupEntryLimit;
@property (nonatomic) long long groupOwnerUid;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
