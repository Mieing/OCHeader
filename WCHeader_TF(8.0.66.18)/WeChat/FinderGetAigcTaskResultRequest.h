@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderGetAigcTaskResultRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSData *contextBuff;

+ (void)initialize;

@end
