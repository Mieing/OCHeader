@class BaseRequest, NSData, FinderTranscribe_PollReq;

@interface FinderGetTranscribeResultRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderTranscribe_PollReq *pollReq;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
