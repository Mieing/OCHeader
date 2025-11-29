@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderLiveIssueCouponRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *stockId;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int issueMode;
@property (nonatomic) unsigned long long activityId;

+ (void)initialize;

@end
