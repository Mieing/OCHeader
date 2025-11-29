@class NSString;

@interface AWECodeGenIdentityLabelModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *iconUrlLight;
@property (copy, nonatomic) NSString *iconUrlDark;
@property (copy, nonatomic) NSString *textColorLight;
@property (copy, nonatomic) NSString *textColorDark;
@property (copy, nonatomic) NSString *backgroundColorLight;
@property (copy, nonatomic) NSString *backgroundColorDark;
@property (copy, nonatomic) NSString *mobParams;
@property (nonatomic) BOOL forceShow;
@property (nonatomic) long long identityLabelId;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
