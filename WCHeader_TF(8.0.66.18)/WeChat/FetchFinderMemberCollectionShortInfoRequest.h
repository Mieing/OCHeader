@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FetchFinderMemberCollectionShortInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long collectionTopicId;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSString *finderMemberTicket;

+ (void)initialize;

@end
