@class NSString, FinderLiveAdReportRequest;

@interface MMLiveAdsReportCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) FinderLiveAdReportRequest *request;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) int scene;
@property (retain, nonatomic) NSString *reportData;

- (id)description;
- (id)initWithObjId:(unsigned long long)a0 liveId:(unsigned long long)a1 scene:(int)a2 reportData:(id)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
