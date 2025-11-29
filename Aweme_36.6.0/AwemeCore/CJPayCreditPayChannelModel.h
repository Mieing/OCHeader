@class CJPayCashierPageInfoModel, NSString, NSDictionary, CJPaySubPayTypeData;

@interface CJPayCreditPayChannelModel : CJPayChannelModel

@property (copy, nonatomic) NSDictionary *promotionProcessInfo;
@property (retain, nonatomic) CJPaySubPayTypeData *payTypeData;
@property (copy, nonatomic) NSString *extParamStr;
@property (retain, nonatomic) CJPayCashierPageInfoModel *cashierPageInfoModel;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (id)buildParams;
- (id)buildShowConfig;
- (void).cxx_destruct;

@end
