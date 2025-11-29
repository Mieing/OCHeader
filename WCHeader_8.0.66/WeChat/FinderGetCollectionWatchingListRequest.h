@class BaseRequest, FinderBaseRequest, NSData;

@interface FinderGetCollectionWatchingListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int commentScene;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
