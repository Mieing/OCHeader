@class BaseRequest, NSString;

@interface GetVoicePrintResourceRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int resScence;
@property (retain, nonatomic) NSString *verifyTicket;

+ (void)initialize;

@end
