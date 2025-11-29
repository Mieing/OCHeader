@class NSString;

@interface CJPaySwitchAreaInfoModel : JSONModel

@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *bioType;
@property (copy, nonatomic) NSString *downgradeReason;
@property (copy, nonatomic) NSString *jumpUrl;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
