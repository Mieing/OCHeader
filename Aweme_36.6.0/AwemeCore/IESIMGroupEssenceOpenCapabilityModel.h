@class NSString;

@interface IESIMGroupEssenceOpenCapabilityModel : IESIMGroupOpenCapabilityModel

@property (copy, nonatomic) NSString *anchorMessageId;
@property (nonatomic) long long containerSelectIndex;
@property (nonatomic) long long collectSelectIndex;

+ (id)optionalPropertyNameSet;

- (void).cxx_destruct;

@end
