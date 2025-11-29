@class BaseRequest, NSString;

@interface GetFileUploadProgressReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fileUploadToken;

+ (void)initialize;

@end
