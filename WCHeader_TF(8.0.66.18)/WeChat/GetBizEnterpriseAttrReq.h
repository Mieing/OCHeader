@class BaseRequest, NSString;

@interface GetBizEnterpriseAttrReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *brandUserName;
@property (nonatomic) unsigned int brandType;
@property (nonatomic) unsigned int lang;

+ (void)initialize;

@end
