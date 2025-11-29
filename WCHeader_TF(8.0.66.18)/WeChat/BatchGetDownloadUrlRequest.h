@class BaseRequest, NSMutableArray, CommRequestSource;

@interface BatchGetDownloadUrlRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *reqList;
@property (nonatomic) unsigned int predownloadScene;
@property (retain, nonatomic) CommRequestSource *requestSource;

+ (void)initialize;

@end
