@class BaseRequest, NSString;

@interface BizChatSearchContactReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *brandUserName;
@property (retain, nonatomic) NSString *keyword;
@property (nonatomic) unsigned int offset;

+ (void)initialize;

@end
