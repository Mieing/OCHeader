@class NSString;

@interface AWEDouPlusOrderResultModel : AWEBaseApiModel

@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *stateDesc;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
