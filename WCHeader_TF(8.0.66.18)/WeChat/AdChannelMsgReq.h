@class BaseRequest, NSString, AdChannelMsgHeader;

@interface AdChannelMsgReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *channel;
@property (retain, nonatomic) AdChannelMsgHeader *header;
@property (retain, nonatomic) NSString *content;

+ (void)initialize;

@end
