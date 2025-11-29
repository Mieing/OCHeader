@class BaseRequest, NSMutableArray, MMListenReportClientInfo;

@interface MMListenUpdateAlbumRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *tasks;
@property (retain, nonatomic) MMListenReportClientInfo *reportClientInfo;

+ (void)initialize;

@end
