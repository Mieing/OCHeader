@class NSString;

@interface AWEIMGroupUpgradeTaskModel : AWEBaseApiModel

@property (nonatomic) unsigned long long taskType;
@property (copy, nonatomic) NSString *taskName;
@property (nonatomic) unsigned long long taskStatus;
@property (copy, nonatomic) NSString *taskDesc;
@property (copy, nonatomic) NSString *jumpLink;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
