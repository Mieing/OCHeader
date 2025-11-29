@class CJPaySignCardMap, NSString, CJPayBindPageInfoResponse, CJPayBizAuthInfoModel;

@interface CJPayBindCardFetchUrlResponse : CJPayBaseResponse

@property (retain, nonatomic) CJPaySignCardMap *signCardMap;
@property (retain, nonatomic) CJPayBizAuthInfoModel *bizAuthInfoModel;
@property (retain, nonatomic) CJPayBindPageInfoResponse *bindPageInfoResponse;
@property (copy, nonatomic) NSString *endPageUrl;

+ (id)keyMapper;

- (BOOL)propertyIsOptional:(id)a0;
- (void).cxx_destruct;

@end
