@class CJPayConfirmNeedCheckAgainConfig;

@interface CJPaySignBizConfig : JSONModel

@property (retain, nonatomic) CJPayConfirmNeedCheckAgainConfig *confirmNeedCheckAgainConfig;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
