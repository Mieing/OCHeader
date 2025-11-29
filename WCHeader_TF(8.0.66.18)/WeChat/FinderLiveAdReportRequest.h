@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderLiveAdReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *reportData;

+ (void)initialize;

@end
