@class BaseRequest, NSString;

@interface GetBizJsApiResultReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *corpId;
@property (nonatomic) unsigned int cmd;
@property (retain, nonatomic) NSString *data;

+ (void)initialize;

@end
