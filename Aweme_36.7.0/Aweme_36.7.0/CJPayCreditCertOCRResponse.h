@class NSString, NSDictionary;

@interface CJPayCreditCertOCRResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSString *dataValidation;
@property (copy, nonatomic) NSString *ocrCheckCode;
@property (copy, nonatomic) NSString *ocrCheckMsg;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
