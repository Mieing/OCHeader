@class BaseRequest, NSString, FinderBaseRequest;

@interface FinderQRCodeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int requestScene;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long commentId;

+ (void)initialize;

@end
