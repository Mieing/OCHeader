@class BaseRequest, NSString, FinderBaseRequest, NSMutableArray;

@interface FinderClientNotifyRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSMutableArray *notityItems;

+ (void)initialize;

@end
