@class NSString, NSArray;

@interface AFDGuideButtonModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *settingsConfigKey;
@property (copy, nonatomic) NSArray *buttons;

+ (id)buttonsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
