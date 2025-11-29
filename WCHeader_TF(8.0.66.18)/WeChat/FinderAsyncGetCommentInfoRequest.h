@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderAsyncGetCommentInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *enterSessionId;
@property (nonatomic) unsigned int h5Version;

+ (void)initialize;

@end
