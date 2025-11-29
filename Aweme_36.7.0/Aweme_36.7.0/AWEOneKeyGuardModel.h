@interface AWEOneKeyGuardModel : AWEBaseApiModel

@property (nonatomic) long long buttonType;
@property (nonatomic) BOOL open;
@property (nonatomic) long long protectDays;

+ (id)JSONKeyPathsByPropertyKey;

- (id)init;

@end
