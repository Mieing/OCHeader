@class BaseRequest, NSString, AdChannelMsgHeader;

@interface AdChannelMsgReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *channel;
@property (retain, nonatomic) AdChannelMsgHeader *header;
@property (retain, nonatomic) NSString *content;

+ (void)initialize;

- (void)setContent:(id)a0;
- (id)content;
- (void)setHeader:(id)a0;
- (id)header;
- (void)setChannel:(id)a0;
- (id)channel;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
