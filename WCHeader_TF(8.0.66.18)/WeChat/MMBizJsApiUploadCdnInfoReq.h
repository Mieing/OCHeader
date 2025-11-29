@class BaseRequest, NSString, MMBizJsApiCdnInfo;

@interface MMBizJsApiUploadCdnInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) MMBizJsApiCdnInfo *cdnInfo;

+ (void)initialize;

@end
