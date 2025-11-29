@class NSString;

@interface AWETemplateTagsImageStyleModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *color;
@property (nonatomic) long long shape;
@property (nonatomic) long long size;

+ (id)instanceWithBlock:(id /* block */)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
