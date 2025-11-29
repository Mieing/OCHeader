@class NSString, AWEUserModel;

@interface AWEInteractModularizationButtonModel : AWEBaseApiModel

@property (nonatomic) unsigned long long buttonType;
@property (nonatomic) unsigned long long buttonColorStyle;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *buttonSchema;
@property (retain, nonatomic) AWEUserModel *user;

+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
