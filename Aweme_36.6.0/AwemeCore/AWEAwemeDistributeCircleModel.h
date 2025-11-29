@interface AWEAwemeDistributeCircleModel : AWEBaseApiModel

@property (nonatomic) unsigned long long distributeType;
@property (nonatomic) BOOL shouldBlockInteraction;
@property (nonatomic) BOOL newSchoolStyleEnable;

+ (id)JSONKeyPathsByPropertyKey;

@end
