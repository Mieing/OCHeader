@class BaseRequest, FinderBaseRequest, NSMutableArray;

@interface FinderGetPrivateMsgContactExtInfoListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSMutableArray *msgContacts;

+ (void)initialize;

@end
