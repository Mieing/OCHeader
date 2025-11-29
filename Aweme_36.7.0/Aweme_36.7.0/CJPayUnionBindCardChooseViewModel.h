@class CJPayUnionCardInfoModel, NSString, NSMutableSet, CJPayUnionBindCardListResponse, CJPayUnionBindCardCommonModel;

@interface CJPayUnionBindCardChooseViewModel : CJPayBindCardPageBaseModel

@property (retain, nonatomic) CJPayUnionBindCardListResponse *cardListResponse;
@property (retain, nonatomic) CJPayUnionCardInfoModel *selectedUnionCardInfoModel;
@property (retain, nonatomic) NSMutableSet *selectedCards;
@property (retain, nonatomic) CJPayUnionBindCardCommonModel *unionBindCardCommonModel;
@property (copy, nonatomic) NSString *signOrderNo;
@property (copy, nonatomic) NSString *specialMerchantId;
@property (copy, nonatomic) NSString *bankMobileNoMask;
@property (nonatomic) long long bindUnionCardType;
@property (copy, nonatomic) NSString *bindCardSafetyExperiment;

+ (id)keyMapperDict;

- (id)p_buildULSMSBizParam;
- (void)sendSMSWithCompletion:(id /* block */)a0;
- (id)verifySMSViewControllerWithResponse:(id)a0;
- (id)p_buildBDPaySendSMSBaseParam;
- (void).cxx_destruct;

@end
