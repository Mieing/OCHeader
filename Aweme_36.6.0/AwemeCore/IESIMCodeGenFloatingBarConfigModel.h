@class NSString, NSDictionary;

@interface IESIMCodeGenFloatingBarConfigModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *templateId;
@property (nonatomic) long long barType;
@property (copy, nonatomic) NSString *barText;
@property (copy, nonatomic) NSString *barIconLight;
@property (copy, nonatomic) NSString *schemaPrefix;
@property (nonatomic) BOOL needUserVisibilityCheck;
@property (copy, nonatomic) NSDictionary *barMobEvent;
@property (copy, nonatomic) NSString *barIconDark;
@property (copy, nonatomic) NSString *btnText;
@property (copy, nonatomic) NSString *badgePlace;
@property (nonatomic) long long barLinesLimit;
@property (nonatomic) long long barRightOption;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
