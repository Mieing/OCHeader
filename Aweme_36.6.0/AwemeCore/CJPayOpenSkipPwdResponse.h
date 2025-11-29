@class NSString;

@interface CJPayOpenSkipPwdResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *openResultStr;
@property (copy, nonatomic) NSString *buttonText;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
