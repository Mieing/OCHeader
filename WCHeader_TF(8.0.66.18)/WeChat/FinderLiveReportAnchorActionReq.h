@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderLiveReportAnchorActionReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSString *actionId;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (nonatomic) unsigned long long objectId;

+ (void)initialize;

@end
