@class NSString, NSArray, IESIMCodeGenInterestGroupDataModel;

@interface IESIMCodeGenOtherGroupModel : AWEBaseDataModel

@property (nonatomic) long long groupId;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupIcon;
@property (nonatomic) int groupMemberCount;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *entryLimit;
@property (nonatomic) BOOL needCutIcon;
@property (copy, nonatomic) NSArray *groupTagsArray;
@property (retain, nonatomic) IESIMCodeGenInterestGroupDataModel *interestGroupDataModel;
@property (copy, nonatomic) NSString *joinText;
@property (nonatomic) int originSeqNum;
@property (copy, nonatomic) NSString *groupDesc;
@property (copy, nonatomic) NSString *groupCreateType;
@property (copy, nonatomic) NSString *groupCategory;
@property (copy, nonatomic) NSString *groupTypeNew;
@property (copy, nonatomic) NSString *groupEntryLimit;
@property (nonatomic) long long groupOwnerUid;
@property (copy, nonatomic) NSString *actionSchema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
