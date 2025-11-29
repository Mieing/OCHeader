@class BaseRequest, NSString;

@interface GetRedPacketStoryRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *packetId;
@property (retain, nonatomic) NSString *fromUsername;

+ (void)initialize;

@end
