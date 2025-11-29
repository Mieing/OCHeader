@class CJPaySignCardMap, NSString, CJPayBindCardRetainInfo, CJPayBindPageInfoResponse, CJPayBizAuthInfoModel;

@interface CJPayMemCreateBizOrderResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *memberBizUrl;
@property (copy, nonatomic) NSString *memberBizOrderNo;
@property (retain, nonatomic) CJPaySignCardMap *signCardMap;
@property (retain, nonatomic) CJPayBindCardRetainInfo *retainInfoModel;
@property (retain, nonatomic) CJPayBizAuthInfoModel *bizAuthInfoModel;
@property (retain, nonatomic) CJPayBindPageInfoResponse *bindPageInfoResponse;

+ (id)keyMapper;

- (id)protocolDescription;
- (id)buttonDescription;
- (id)generateUserInfo;
- (id)buildCommonModel;
- (void).cxx_destruct;

@end
