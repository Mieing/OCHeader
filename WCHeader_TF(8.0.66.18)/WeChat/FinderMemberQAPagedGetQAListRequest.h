@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderMemberQAPagedGetQAListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *myUsername;
@property (retain, nonatomic) NSString *msProviderUsername;
@property (retain, nonatomic) NSString *lastBuffer;
@property (nonatomic) int getType;
@property (nonatomic) unsigned long long qaFeedId;

+ (void)initialize;

@end
