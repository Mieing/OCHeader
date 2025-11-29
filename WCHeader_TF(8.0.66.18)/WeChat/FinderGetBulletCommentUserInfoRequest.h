@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderGetBulletCommentUserInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long commentId;
@property (retain, nonatomic) NSString *nonceId;

+ (void)initialize;

@end
