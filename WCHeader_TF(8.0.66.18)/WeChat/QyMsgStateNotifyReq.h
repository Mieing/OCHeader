@class BaseRequest, NSString;

@interface QyMsgStateNotifyReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *brandUserName;
@property (retain, nonatomic) NSString *bizchatId;
@property (nonatomic) unsigned int timeStamp;

+ (void)initialize;

@end
