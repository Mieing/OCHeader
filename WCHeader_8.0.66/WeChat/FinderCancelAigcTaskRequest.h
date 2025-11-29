@class BaseRequest, NetworkingMetaData, NSString, FinderBaseRequest, NSData;

@interface FinderCancelAigcTaskRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NetworkingMetaData *metaData;
@property (retain, nonatomic) NSString *cmd;
@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSData *contextBuff;

+ (void)initialize;

@end
