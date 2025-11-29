@class NSString;

@interface CJPayCreditSignConfirmResponse : CJPayDyPaySignConfirmResponse

@property (copy, nonatomic) NSString *commonResultPageInfoStr;
@property (copy, nonatomic) NSString *actionType;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)basicDict;

- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
