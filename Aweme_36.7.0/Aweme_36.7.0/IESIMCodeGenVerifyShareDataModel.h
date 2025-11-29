@class NSString, NSArray, IESIMCodeGenGroupOwnerModel, IESIMCodeGenInterestGroupDataModel, IESIMCodeGenPopupInfoModel, NSDictionary;

@interface IESIMCodeGenVerifyShareDataModel : AWEBaseDataModel

@property (nonatomic) long long inviterId;
@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) int shareType;
@property (nonatomic) int shareScene;
@property (copy, nonatomic) NSString *ticket;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupAvatar;
@property (nonatomic) int groupMemberCount;
@property (copy, nonatomic) NSString *inviterSecUid;
@property (copy, nonatomic) NSArray *toFollowUserListModelArray;
@property (copy, nonatomic) NSString *groupSecondAvatar;
@property (nonatomic) int shareChannel;
@property (retain, nonatomic) IESIMCodeGenGroupOwnerModel *groupOwnerInfoModel;
@property (copy, nonatomic) NSString *groupDesc;
@property (copy, nonatomic) NSArray *entryLimitModelArray;
@property (copy, nonatomic) NSArray *groupTagsArray;
@property (copy, nonatomic) NSString *groupType;
@property (copy, nonatomic) NSString *groupCreateType;
@property (retain, nonatomic) IESIMCodeGenInterestGroupDataModel *interestGroupDataModel;
@property (copy, nonatomic) NSString *joinText;
@property (copy, nonatomic) NSArray *relatedUserListModelArray;
@property (retain, nonatomic) IESIMCodeGenPopupInfoModel *popupViewDataModel;
@property (copy, nonatomic) NSDictionary *joinExt;
@property (copy, nonatomic) NSString *groupTypeNew;
@property (copy, nonatomic) NSString *groupCategory;
@property (nonatomic) BOOL needCropIcon;
@property (copy, nonatomic) NSString *groupAuditQuestion;
@property (copy, nonatomic) NSString *groupEntryLimit;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
