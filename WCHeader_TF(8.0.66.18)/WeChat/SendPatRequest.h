@class BaseRequest, NSString;

@interface SendPatRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fromUsername;
@property (retain, nonatomic) NSString *chatUsername;
@property (retain, nonatomic) NSString *pattedUsername;
@property (retain, nonatomic) NSString *clientMsgId;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
