@class NSString;

@interface AFDButtonPropertyModel : AWEBaseApiModel

@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) id /* block */ actionBlock;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
