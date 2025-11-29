@class NSString;

@interface AFDAwemeFamiliarGroupIDModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long offset;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithId:(id)a0 offset:(long long)a1;
- (void).cxx_destruct;

@end
