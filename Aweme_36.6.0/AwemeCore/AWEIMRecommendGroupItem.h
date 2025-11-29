@class NSString, NSArray, NSDictionary, AWEIMRecommendGroupItemCreateGroupInfo, AWEIMRecommendGroupItemJoinGroupInfo;

@interface AWEIMRecommendGroupItem : MTLModel <MTLJSONSerializing, NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long clickAction;
@property (copy, nonatomic) NSString *actionSchema;
@property (nonatomic) long long groupID;
@property (nonatomic) long long groupOwnerId;
@property (copy, nonatomic) NSString *ownerNickname;
@property (copy, nonatomic) NSString *groupName;
@property (nonatomic) int groupMemberCount;
@property (copy, nonatomic) NSString *groupIcon;
@property (nonatomic) BOOL needCutIcon;
@property (copy, nonatomic) NSString *groupOwnerSecUid;
@property (copy, nonatomic) NSString *recommendHint;
@property (copy, nonatomic) NSString *recommendTag;
@property (nonatomic) long long unreadCount;
@property (nonatomic) double recommendTime;
@property (nonatomic) long long recommendType;
@property (retain, nonatomic) AWEIMRecommendGroupItemJoinGroupInfo *joinGroupInfo;
@property (retain, nonatomic) AWEIMRecommendGroupItemCreateGroupInfo *createGroupInfo;
@property (copy, nonatomic) NSString *recommendHintTemplate;
@property (copy, nonatomic) NSArray *recommendHintTemplateValueArray;
@property (copy, nonatomic) NSArray *recommendIconUserIds;
@property (copy, nonatomic) NSArray *recommendStickToTopUserIds;
@property (nonatomic) BOOL needDefaultInviteeSelected;
@property (nonatomic) long long selectedInviteeCount;
@property (nonatomic) long long cutIconType;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSDictionary *recommendReasonUserMap;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) BOOL showTimeOnCell;
@property (nonatomic) BOOL needHideNextTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recommendHintTemplateValueArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)shouldUseLocalMergeAvatar;
- (id)trackChatType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
