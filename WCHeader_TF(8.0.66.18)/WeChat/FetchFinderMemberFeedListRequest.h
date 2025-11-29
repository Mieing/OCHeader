@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FetchFinderMemberFeedListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *finderMemberTicket;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int feedType;

+ (void)initialize;

@end
