@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderAdPreMovieAdReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *adReportData;
@property (retain, nonatomic) NSString *finderReportBypData;

+ (void)initialize;

@end
