@class BaseRequest, NSMutableArray, CommRequestSource;

@interface BatchGetDownloadUrlRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *reqList;
@property (nonatomic) unsigned int predownloadScene;
@property (retain, nonatomic) CommRequestSource *requestSource;

+ (void)initialize;

- (void)setRequestSource:(id)a0;
- (id)requestSource;
- (void)setPredownloadScene:(unsigned int)a0;
- (unsigned int)predownloadScene;
- (void)setReqList:(id)a0;
- (id)reqList;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
