@class BaseRequest, NetworkingMetaData, NSString, FinderBaseRequest, NSData;

@interface FinderCancelAIMediaTaskRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NetworkingMetaData *metadata;
@property (retain, nonatomic) NSString *cmd;
@property (retain, nonatomic) NSString *generateKey;
@property (retain, nonatomic) NSData *contextBuff;

+ (void)initialize;

@end
