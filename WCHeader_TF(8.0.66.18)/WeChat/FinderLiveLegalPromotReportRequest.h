@class BaseRequest, FinderBaseRequest;

@interface FinderLiveLegalPromotReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int legalType;
@property (nonatomic) unsigned int legalVersion;

+ (void)initialize;

@end
