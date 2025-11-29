@class NSString;

@interface AWEIMGroupActionCheckActionRule : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL isMatch;
@property (nonatomic) unsigned long long ruleTye;

+ (id)ruleTyeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
