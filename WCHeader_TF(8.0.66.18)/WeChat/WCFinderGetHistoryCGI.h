@class NSString;

@interface WCFinderGetHistoryCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) int tabType;
@property (nonatomic) int commentscene;
@property (copy, nonatomic) NSString *fluencyReportSceneKey;

- (id)initWithLastBuff:(id)a0 clientStatus:(id)a1 username:(id)a2 tabType:(int)a3 commentscene:(int)a4 fluencyReportSceneKey:(id)a5 successful:(id /* block */)a6 failure:(id /* block */)a7;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void)reportCGIStart;
- (void)reportCGIFinish;
- (void)reportCGIFail;
- (void).cxx_destruct;

@end
