@interface AWEPrivateListSettingsModel : AWEBaseApiModel

@property (nonatomic) BOOL isVisible;
@property (nonatomic) long long totalCount;

+ (id)JSONKeyPathsByPropertyKey;

@end
