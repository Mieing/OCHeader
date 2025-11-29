@class NSString;

@interface AWEUserServerMobParamsModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *mobParams;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
