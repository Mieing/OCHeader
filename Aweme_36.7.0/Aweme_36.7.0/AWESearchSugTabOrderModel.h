@class NSString;

@interface AWESearchSugTabOrderModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *tabType;
@property (nonatomic) long long newIndex;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
