@class BaseRequest, NSString, FinderBaseRequest, NSMutableArray;

@interface FinderExtStatsReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *finderusername;
@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSMutableArray *extStats;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;

+ (void)initialize;

@end
