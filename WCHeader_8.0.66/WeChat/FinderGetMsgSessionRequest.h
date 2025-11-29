@class BaseRequest, FinderBaseRequest, NSMutableArray;

@interface FinderGetMsgSessionRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSMutableArray *reqList;
@property (nonatomic) BOOL supportAlias;

+ (void)initialize;

@end
