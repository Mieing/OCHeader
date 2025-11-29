@class NSDictionary, CJPaySecondaryConfirmInfoModel, CJPayErrorButtonInfo;

@interface CJPayBindCardPreChargeResponse : CJPayBaseResponse

@property (retain, nonatomic) CJPayErrorButtonInfo *buttonInfo;
@property (retain, nonatomic) CJPaySecondaryConfirmInfoModel *secConfirmInfoModel;
@property (copy, nonatomic) NSDictionary *exts;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
