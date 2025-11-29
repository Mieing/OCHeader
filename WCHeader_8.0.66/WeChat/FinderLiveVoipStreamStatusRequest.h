@class BaseRequest, FinderBaseRequest, NSMutableArray;

@interface FinderLiveVoipStreamStatusRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSMutableArray *statusList;

+ (void)initialize;

@end
