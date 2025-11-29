@class BaseRequest, NSString, AddWxagVideoRequest_VideoInfo;

@interface AddWxagVideoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) AddWxagVideoRequest_VideoInfo *videoInfo;
@property (retain, nonatomic) NSString *taskId;

+ (void)initialize;

@end
