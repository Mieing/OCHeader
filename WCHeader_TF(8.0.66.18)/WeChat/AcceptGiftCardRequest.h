@class BaseRequest, NSString;

@interface AcceptGiftCardRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int bizUin;
@property (retain, nonatomic) NSString *orderId;
@property (retain, nonatomic) NSString *chatroomName;
@property (nonatomic) BOOL doNotAccept;

+ (void)initialize;

@end
