@class NSDictionary;

@interface AWEAICardInfo : AWEBaseApiModel

@property (copy, nonatomic) NSDictionary *expandCardInfo;
@property (copy, nonatomic) NSDictionary *tipsCardInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
