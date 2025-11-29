@interface AWETeenIMInteractNotificationCountModel : AWEBaseApiModel

@property (nonatomic) long long group;
@property (nonatomic) long long count;
@property (nonatomic) long long latestTime;
@property (nonatomic) long long interactiveShowType;
@property (nonatomic) long long showType;

+ (id)JSONKeyPathsByPropertyKey;

@end
