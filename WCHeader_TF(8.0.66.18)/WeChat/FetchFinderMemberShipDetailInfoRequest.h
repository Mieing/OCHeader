@class BaseRequest, FinderBaseRequest, NSString;

@interface FetchFinderMemberShipDetailInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *liveNoticeId;
@property (nonatomic) unsigned int previewMode;

+ (void)initialize;

@end
