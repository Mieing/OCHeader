@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderGetFeedLikedListReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) NSData *likeBuffer;
@property (nonatomic) unsigned long long likeId;

+ (void)initialize;

@end
