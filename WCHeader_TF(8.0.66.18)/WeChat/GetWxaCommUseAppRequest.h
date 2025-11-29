@class BaseRequest, NSString, GetWxaCommUseAppRequest_WxaSiderBarReq;

@interface GetWxaCommUseAppRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *commuseAppExtraData;
@property (retain, nonatomic) GetWxaCommUseAppRequest_WxaSiderBarReq *wxaSiderbarReq;

+ (void)initialize;

@end
