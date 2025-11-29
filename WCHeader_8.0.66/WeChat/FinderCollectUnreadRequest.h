@class BaseRequest, FinderBaseRequest, NSMutableArray;

@interface FinderCollectUnreadRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSMutableArray *unreadItems;

+ (void)initialize;

@end
