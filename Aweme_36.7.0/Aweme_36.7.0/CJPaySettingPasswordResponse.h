@class NSString, CJPayMemBankInfoModel;

@interface CJPaySettingPasswordResponse : CJPayPassKitBaseResponse

@property (copy, nonatomic) NSString *token;
@property (retain, nonatomic) CJPayMemBankInfoModel *bankCardInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
