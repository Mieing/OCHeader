@class ErrorReportInfo, BaseRequest, NSString, FinderBaseRequest;

@interface FinderLiveClientReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) ErrorReportInfo *errorReportInfo;

+ (void)initialize;

@end
