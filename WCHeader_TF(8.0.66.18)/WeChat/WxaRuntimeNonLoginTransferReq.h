@class BaseRequest, NSString, NSData;

@interface WxaRuntimeNonLoginTransferReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *hostAppid;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSData *reqData;
@property (retain, nonatomic) NSString *wxaAppid;
@property (nonatomic) int cmdId;
@property (retain, nonatomic) NSString *deviceToken;
@property (retain, nonatomic) NSString *deviceUsername;

+ (void)initialize;

@end
