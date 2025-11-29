@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderGetLiveSongListReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long objectId;

+ (void)initialize;

@end
