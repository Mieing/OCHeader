@class NSString;

@interface AWEIMCreateGroupInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *groupName;
@property (nonatomic) long long groupNumLeft;
@property (nonatomic) long long defaultAuditSwitch;
@property (nonatomic) long long defaultLiveAutoSync;
@property (nonatomic) long long defaultItemAutoSync;
@property (copy, nonatomic) NSString *legalUrl;
@property (nonatomic) long long groupCountMaxLimit;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
