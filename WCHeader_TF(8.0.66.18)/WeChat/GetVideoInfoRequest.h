@class BaseRequest, NSString;

@interface GetVideoInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) NSString *vid;

+ (void)initialize;

@end
