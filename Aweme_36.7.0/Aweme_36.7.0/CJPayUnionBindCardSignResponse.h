@class CJPayErrorButtonInfo;

@interface CJPayUnionBindCardSignResponse : CJPayBaseResponse

@property (retain, nonatomic) CJPayErrorButtonInfo *buttonInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
