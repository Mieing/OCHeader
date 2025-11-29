@class NSString, NSArray;

@interface AWETemplateTagsContainerStyleModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *color;
@property (nonatomic) long long transparency;
@property (nonatomic) long long borderRadius;
@property (copy, nonatomic) NSArray *padding;
@property (nonatomic) long long height;

+ (id)instanceWithBlock:(id /* block */)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
