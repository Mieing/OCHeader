@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderAdCommentApplyRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *username;

+ (void)initialize;

@end
