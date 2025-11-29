@class BaseRequest, FinderBaseRequest;

@interface FinderReportBgmInteractRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int flags;
@property (nonatomic) unsigned long long listenId;
@property (nonatomic) unsigned long long finderFeedId;
@property (nonatomic) unsigned int itemType;
@property (nonatomic) unsigned long long mtime;

+ (void)initialize;

@end
