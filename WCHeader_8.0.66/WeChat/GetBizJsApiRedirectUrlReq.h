@class BaseRequest, NSString;

@interface GetBizJsApiRedirectUrlReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *corpId;
@property (retain, nonatomic) NSString *groupId;
@property (retain, nonatomic) NSString *timeStamp;
@property (retain, nonatomic) NSString *nonceStr;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *fromUrl;
@property (retain, nonatomic) NSString *postData;

+ (void)initialize;

@end
