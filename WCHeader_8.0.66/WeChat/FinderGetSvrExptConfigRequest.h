@class BaseRequest, FinderBaseRequest, NSMutableArray;

@interface FinderGetSvrExptConfigRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSMutableArray *exptId;

+ (void)initialize;

- (void)setExptId:(id)a0;
- (id)exptId;
- (void)setFinderBasereq:(id)a0;
- (id)finderBasereq;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
