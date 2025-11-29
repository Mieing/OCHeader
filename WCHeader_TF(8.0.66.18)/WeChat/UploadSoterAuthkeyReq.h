@class BaseRequest, NSString;

@interface UploadSoterAuthkeyReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *elementJson;
@property (retain, nonatomic) NSString *elementJsonSignature;

+ (void)initialize;

@end
