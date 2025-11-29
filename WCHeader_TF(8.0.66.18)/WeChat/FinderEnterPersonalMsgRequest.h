@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderEnterPersonalMsgRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int myAccountType;
@property (retain, nonatomic) NSString *toUsername;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) BOOL supportAlias;

+ (void)initialize;

@end
