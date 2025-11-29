@class BaseRequest, NSData;

@interface GetVoiceTextSimplifyResRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *sessionId;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
