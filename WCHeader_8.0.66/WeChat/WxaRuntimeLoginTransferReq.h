@class BaseRequest, NSString, NSData;

@interface WxaRuntimeLoginTransferReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *hostAppid;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSData *reqData;
@property (retain, nonatomic) NSString *wxaAppid;
@property (nonatomic) int cmdId;
@property (nonatomic) unsigned int sdkVersion;

+ (void)initialize;

@end
