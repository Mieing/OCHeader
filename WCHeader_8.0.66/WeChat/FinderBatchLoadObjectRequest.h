@class BaseRequest, FinderBaseRequest, NSMutableArray, FinderClientStatus;

@interface FinderBatchLoadObjectRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSMutableArray *ids;
@property (nonatomic) unsigned int batchLoadScene;
@property (retain, nonatomic) FinderClientStatus *status;

+ (void)initialize;

@end
