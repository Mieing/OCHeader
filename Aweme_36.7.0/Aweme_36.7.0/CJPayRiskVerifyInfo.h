@class NSString;

@interface CJPayRiskVerifyInfo : JSONModel

@property (copy, nonatomic) NSString *verifyId;
@property (copy, nonatomic) NSString *verifyToken;
@property (copy, nonatomic) NSString *verifyMode;
@property (copy, nonatomic) NSString *verifyUrl;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
