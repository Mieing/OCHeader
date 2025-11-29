@class NSString, NSArray;

@interface AWECodeGenChargePermissonInfoModel : AWEBaseDataModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL permission;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *schemaText;
@property (copy, nonatomic) NSArray *denySubTypesArray;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
