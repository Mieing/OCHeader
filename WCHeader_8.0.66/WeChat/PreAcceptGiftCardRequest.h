@class BaseRequest, NSString;

@interface PreAcceptGiftCardRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int bizUin;
@property (retain, nonatomic) NSString *orderId;
@property (retain, nonatomic) NSString *chatroomName;

+ (void)initialize;

@end
