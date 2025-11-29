@class BaseRequest, BizEnterpriseAttr;

@interface SetBizEnterpriseAttrReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int brandType;
@property (nonatomic) unsigned int mask;
@property (retain, nonatomic) BizEnterpriseAttr *attr;

+ (void)initialize;

@end
