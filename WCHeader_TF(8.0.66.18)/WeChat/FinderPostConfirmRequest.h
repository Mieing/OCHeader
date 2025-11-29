@class BaseRequest, NSString, FinderPostTraceInfo, FinderBaseRequest;

@interface FinderPostConfirmRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *clientid;
@property (retain, nonatomic) FinderPostTraceInfo *traceInfo;
@property (nonatomic) unsigned long long postFlag;
@property (nonatomic) unsigned int postScene;

+ (void)initialize;

@end
