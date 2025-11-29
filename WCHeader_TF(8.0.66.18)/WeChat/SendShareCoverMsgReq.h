@class BaseRequest, NSString;

@interface SendShareCoverMsgReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *receiveuri;
@property (retain, nonatomic) NSString *tousername;

+ (void)initialize;

@end
