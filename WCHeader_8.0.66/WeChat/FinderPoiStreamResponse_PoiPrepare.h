@class NSString;

@interface FinderPoiStreamResponse_PoiPrepare : WXPBGeneratedMessage

@property (nonatomic) unsigned int enablePoiBind;
@property (nonatomic) unsigned int enablePoiErrReport;
@property (nonatomic) unsigned int hasFinderAcct;
@property (nonatomic) unsigned int hasCompanyVerify;
@property (nonatomic) unsigned int isBrandMerchant;
@property (retain, nonatomic) NSString *poiBindUrl;
@property (retain, nonatomic) NSString *poiErrReportUrl;

+ (void)initialize;

@end
