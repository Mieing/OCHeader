@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderModAigcTaskRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSString *mjDraftId;
@property (retain, nonatomic) NSString *coverImgUrl;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
