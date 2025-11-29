@class NSString;

@interface AWETemplateTagsTextInfoStyleModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *color;
@property (nonatomic) long long size;
@property (nonatomic) BOOL bold;
@property (nonatomic) long long omitStrategy;
@property (nonatomic) long long maxCharacter;

+ (id)instanceWithBlock:(id /* block */)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
