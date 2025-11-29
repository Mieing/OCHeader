@class NSArray;

@interface AWEBarShowStrategyModel : AWEBaseApiModel

@property (nonatomic) long long visiableType;
@property (copy, nonatomic) NSArray *whiteList;
@property (copy, nonatomic) NSArray *blackList;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
