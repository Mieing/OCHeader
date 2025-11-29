@class NSString, IESECRelationActivityDynamicComponentModel;

@interface IESECWinFollowResponse : IESECBaseApiModel

@property (copy, nonatomic) NSString *followSuccessMsg;
@property (nonatomic) long long followStatus;
@property (retain, nonatomic) IESECRelationActivityDynamicComponentModel *module;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
