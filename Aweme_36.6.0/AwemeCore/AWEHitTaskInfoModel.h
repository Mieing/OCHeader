@interface AWEHitTaskInfoModel : AWEBaseApiModel

@property (nonatomic) long long completedTaskCount;
@property (nonatomic) long long totalTaskCount;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDict:(id)a0;

@end
