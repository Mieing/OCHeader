@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderGetFeedFavListReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned int requestType;

+ (void)initialize;

@end
