@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderGetAllWindowProductsRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSString *entranceReportInfo;
@property (retain, nonatomic) NSString *ecSource;

+ (void)initialize;

@end
