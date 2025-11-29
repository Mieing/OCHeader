@class NSString;

@interface CJPayBindCardPayReConfirmInfo : JSONModel

@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSString *titleMessage;
@property (copy, nonatomic) NSString *tipsIcon;
@property (copy, nonatomic) NSString *tipsMessage;
@property (copy, nonatomic) NSString *confirmBtnMessage;
@property (copy, nonatomic) NSString *cancelButtonAction;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
