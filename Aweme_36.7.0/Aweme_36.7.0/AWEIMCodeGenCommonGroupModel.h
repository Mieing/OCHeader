@class NSString;

@interface AWEIMCodeGenCommonGroupModel : AWEBaseDataModel

@property (nonatomic) long long groupId;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupIcon;
@property (nonatomic) int groupMemberCount;
@property (nonatomic) long long creatorUid;
@property (nonatomic) long long ownerUid;
@property (copy, nonatomic) NSString *groupCreateType;
@property (copy, nonatomic) NSString *subTitle;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
