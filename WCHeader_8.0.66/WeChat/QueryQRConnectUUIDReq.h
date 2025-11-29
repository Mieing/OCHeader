@class BaseRequest, NSString;

@interface QueryQRConnectUUIDReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned int lastErrcode;
@property (nonatomic) unsigned int opt;
@property (retain, nonatomic) NSString *sdkToken;

+ (void)initialize;

@end
