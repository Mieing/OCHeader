@class NSString;

@interface IESIMShareGroupCardUpdateInfo : IESIMBaseApiModel

@property (copy, nonatomic) NSString *groupIcon;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupOwnerNickName;
@property (copy, nonatomic) NSString *groupOwnerSecUid;
@property (nonatomic) long long groupID;
@property (nonatomic) long long groupOwnerUid;
@property (nonatomic) long long memberCount;
@property (nonatomic) BOOL needCutIcon;
@property (nonatomic) BOOL isInGroup;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
