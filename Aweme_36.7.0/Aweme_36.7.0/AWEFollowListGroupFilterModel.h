@class NSString;

@interface AWEFollowListGroupFilterModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long type;
@property (nonatomic) BOOL isSelected;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
