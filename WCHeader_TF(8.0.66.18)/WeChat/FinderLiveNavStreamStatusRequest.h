@class BaseRequest, FinderLiveClientStatus, FinderBaseRequest, NSMutableArray;

@interface FinderLiveNavStreamStatusRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) FinderLiveClientStatus *clientStatus;
@property (retain, nonatomic) NSMutableArray *navStatus;
@property (retain, nonatomic) NSMutableArray *enterStatus;

+ (void)initialize;

@end
