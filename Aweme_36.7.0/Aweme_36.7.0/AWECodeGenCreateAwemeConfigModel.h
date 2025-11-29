@class NSString, NSArray;

@interface AWECodeGenCreateAwemeConfigModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *textExtraModelArray;
@property (nonatomic) int textPrefixEnd;
@property (copy, nonatomic) NSString *createAwemeButtonText;
@property (copy, nonatomic) NSString *createAwemeToast;
@property (nonatomic) int createAwemeToastType;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
