@class NSString;

@interface AWEInteractModularizationActionModel : AWEBaseApiModel

@property (nonatomic) unsigned long long actionType;
@property (copy, nonatomic) NSString *text;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
