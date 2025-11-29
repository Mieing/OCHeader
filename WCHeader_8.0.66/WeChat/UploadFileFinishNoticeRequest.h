@class BaseRequest, NSString;

@interface UploadFileFinishNoticeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fileUploadFinishBuffer;

+ (void)initialize;

@end
