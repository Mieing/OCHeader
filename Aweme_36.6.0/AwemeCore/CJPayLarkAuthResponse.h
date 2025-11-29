@class NSString;

@interface CJPayLarkAuthResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *retCode;
@property (copy, nonatomic) NSString *retMsg;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
