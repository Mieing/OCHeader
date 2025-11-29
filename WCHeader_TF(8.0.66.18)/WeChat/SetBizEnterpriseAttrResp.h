@class QyBaseResponse, BizEnterpriseAttr, BaseResponse;

@interface SetBizEnterpriseAttrResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) QyBaseResponse *qyBaseResp;
@property (retain, nonatomic) BizEnterpriseAttr *attr;

+ (void)initialize;

@end
