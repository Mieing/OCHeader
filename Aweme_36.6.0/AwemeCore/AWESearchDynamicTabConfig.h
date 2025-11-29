@class NSString;

@interface AWESearchDynamicTabConfig : AWEBaseApiModel

@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *tabType;
@property (copy, nonatomic) NSString *tabViewName;
@property (nonatomic) long long tabNum;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
