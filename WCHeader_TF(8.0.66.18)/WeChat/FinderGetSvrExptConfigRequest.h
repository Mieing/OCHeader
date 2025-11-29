@class BaseRequest, FinderBaseRequest, NSMutableArray;

@interface FinderGetSvrExptConfigRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSMutableArray *exptId;

+ (void)initialize;

@end
