@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderDelPersonalMsgRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *msgSessionId;

+ (void)initialize;

@end
