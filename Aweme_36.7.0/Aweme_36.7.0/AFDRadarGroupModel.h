@class AFDRadarInnerGroupModel;

@interface AFDRadarGroupModel : AWEBaseApiModel

@property (nonatomic) long long status;
@property (nonatomic) BOOL hasJoined;
@property (retain, nonatomic) AFDRadarInnerGroupModel *groupInfo;

+ (id)groupInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
