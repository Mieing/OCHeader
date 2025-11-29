@class BaseRequest, FinderBaseRequest;

@interface FinderDelCollectionWatchingRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long collectionId;

+ (void)initialize;

@end
