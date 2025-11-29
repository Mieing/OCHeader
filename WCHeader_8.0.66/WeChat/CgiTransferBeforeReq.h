@class BaseRequest, NSString;

@interface CgiTransferBeforeReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *receiverUsername;
@property (retain, nonatomic) NSString *jsapiReqkey;
@property (retain, nonatomic) NSString *groupUsername;

+ (void)initialize;

@end
