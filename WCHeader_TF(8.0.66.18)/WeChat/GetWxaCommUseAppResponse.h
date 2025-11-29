@class WxaAppBaseResponse, CommUseAppInfo, BaseResponse;

@interface GetWxaCommUseAppResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) WxaAppBaseResponse *wxaappBaseresponse;
@property (retain, nonatomic) CommUseAppInfo *commuseAppinfo;
@property (nonatomic) unsigned int nextReqInterval;

+ (void)initialize;

@end
