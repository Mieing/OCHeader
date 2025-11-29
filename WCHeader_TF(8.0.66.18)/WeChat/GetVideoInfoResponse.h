@class NSString, BaseResponse;

@interface GetVideoInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *ckey;
@property (retain, nonatomic) NSString *videoCgiUrl;
@property (retain, nonatomic) NSString *videoFileUrl;

+ (void)initialize;

@end
