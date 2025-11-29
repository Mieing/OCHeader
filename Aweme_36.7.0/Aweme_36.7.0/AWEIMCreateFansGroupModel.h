@class NSString;

@interface AWEIMCreateFansGroupModel : IESIMBaseApiModel

@property (copy, nonatomic) NSString *groupName;
@property (nonatomic) long long groupCountMaxLimit;
@property (nonatomic) long long groupNumLeft;
@property (nonatomic) long long showAtProfile;
@property (nonatomic) long long auditSwitch;
@property (nonatomic) long long liveAutoSync;
@property (nonatomic) long long itemAutoSync;
@property (copy, nonatomic) NSString *legalUrl;
@property (nonatomic) long long showNumLimit;
@property (nonatomic) long long canShowAtProfile;
@property (copy, nonatomic) NSString *groupIcon;
@property (copy, nonatomic) NSString *groupDesc;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL noFansGroup;
@property (copy, nonatomic) NSString *fansGroupTypeIconUrl;
@property (copy, nonatomic) NSString *interestGroupTypeIconUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
