@class BaseRequest, NSString, FinderBaseRequest, FinderObjectAdvertisementInfo;

@interface FinderAdReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSString *reportData;
@property (retain, nonatomic) NSString *reportBypData;
@property (retain, nonatomic) FinderObjectAdvertisementInfo *advertisementInfo;

+ (void)initialize;

@end
