@class NSArray, FinderClientStatus, NSString;

@interface WCFinderStatsReportCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (copy, nonatomic) NSArray *statsArray;
@property (nonatomic) unsigned long long reportScene;
@property (retain, nonatomic) FinderClientStatus *status;
@property (retain, nonatomic) NSArray *feedIdArray;
@property (copy, nonatomic) NSString *extraKey;

- (id)initWithStatsArray:(id)a0 reportScene:(unsigned long long)a1 extraKey:(id)a2 clientStatus:(id)a3 feedIdArray:(id)a4 successful:(id /* block */)a5 failure:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
