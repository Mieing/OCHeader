@class NSString, NSArray, AWEIMGroupInviteCardGroupOwnerInfo, AWEIMGroupJoinPanelPopupInfo, NSDictionary;

@interface AWEIMShareVerifyResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) long long conversationShortID;
@property (copy, nonatomic) NSString *groupAvatar;
@property (copy, nonatomic) NSString *secondGroupAvatar;
@property (copy, nonatomic) NSString *groupName;
@property (nonatomic) int memberCount;
@property (nonatomic) long long inviterID;
@property (copy, nonatomic) NSString *inviterSecID;
@property (copy, nonatomic) NSString *ticket;
@property (nonatomic) int shareScene;
@property (nonatomic) int shareType;
@property (retain, nonatomic) NSArray *toFollowUserArray;
@property (retain, nonatomic) AWEIMGroupInviteCardGroupOwnerInfo *groupOwnerInfo;
@property (copy, nonatomic) NSString *groupDesc;
@property (retain, nonatomic) NSArray *entryLimits;
@property (retain, nonatomic) NSArray *groupTags;
@property (copy, nonatomic) NSString *groupType;
@property (copy, nonatomic) NSString *groupCreateType;
@property (copy, nonatomic) NSString *joinText;
@property (copy, nonatomic) NSArray *userInfoList;
@property (retain, nonatomic) AWEIMGroupJoinPanelPopupInfo *popupViewData;
@property (copy, nonatomic) NSDictionary *joinExt;
@property (copy, nonatomic) NSString *groupTypeV2;
@property (copy, nonatomic) NSString *groupCategory;
@property (nonatomic) BOOL isNeedCropIcon;
@property (copy, nonatomic) NSString *groupAuditQuestion;
@property (copy, nonatomic) NSString *groupEntryLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)toFollowUserArrayJSONTransformer;
+ (id)userInfoListJSONTransformer;
+ (id)popupViewDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
