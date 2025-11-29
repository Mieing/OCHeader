@class NSString;

@interface CJPayUserInfoExtInfoModel : JSONModel

@property (nonatomic) long long pwdMode;
@property (copy, nonatomic) NSString *pwdTypeString;
@property (copy, nonatomic) NSString *pwdModeString;
@property (copy, nonatomic) NSString *pwdFirstPageTitle;
@property (copy, nonatomic) NSString *pwdSecondPageTitle;
@property (copy, nonatomic) NSString *pwdFirstInputTips;
@property (copy, nonatomic) NSString *pwdSecondInputTips;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
