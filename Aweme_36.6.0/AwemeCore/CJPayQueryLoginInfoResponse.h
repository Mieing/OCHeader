@class CJPayLoginRetainInfoV2, NSString, NSDictionary, CJPayVoucherRetainInfoModel, CJPayQueryLoginExtsModel, CJPayMerchantInfo, CJPayLoginTradeInfo;

@interface CJPayQueryLoginInfoResponse : CJPayBaseResponse

@property (retain, nonatomic) CJPayMerchantInfo *merchantInfo;
@property (copy, nonatomic) NSString *promotionPutInfo;
@property (copy, nonatomic) NSDictionary *retainInfoV2;
@property (retain, nonatomic) CJPayLoginTradeInfo *tradeInfo;
@property (retain, nonatomic) CJPayLoginRetainInfoV2 *loginRetainInfoV2;
@property (retain, nonatomic) NSDictionary *processInfo;
@property (retain, nonatomic) CJPayVoucherRetainInfoModel *superimposedRetainInfo;
@property (retain, nonatomic) CJPayQueryLoginExtsModel *loginExtsModel;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)basicDict;

- (void).cxx_destruct;
- (long long)resultStatus;

@end
