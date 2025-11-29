@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderAdCommentReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *reportData;
@property (retain, nonatomic) NSString *reportBypData;

+ (void)initialize;

@end
