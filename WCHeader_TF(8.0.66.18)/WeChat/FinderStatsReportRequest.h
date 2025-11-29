@class MegaVideoClientStatus, BaseRequest, NSString, NSData, FinderBaseRequest, NSMutableArray, FinderClientStatus;

@interface FinderStatsReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *stats;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) FinderClientStatus *status;
@property (retain, nonatomic) NSData *reqExtData;
@property (nonatomic) long long clientTimeMs;
@property (retain, nonatomic) MegaVideoClientStatus *videoStatus;

+ (void)initialize;

@end
