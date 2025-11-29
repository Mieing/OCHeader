@class BaseRequest, NSString;

@interface CgiTransferRecallReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *receiverUsername;
@property (retain, nonatomic) NSString *groupUsername;
@property (retain, nonatomic) NSString *transferId;

+ (void)initialize;

@end
