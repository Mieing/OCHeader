@class NSData, BaseResponse;

@interface GetVoiceTextSimplifyResResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *text;
@property (nonatomic) BOOL isEnd;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int seq;
@property (retain, nonatomic) NSData *sessionId;

+ (void)initialize;

@end
