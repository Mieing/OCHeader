@class NSData;

@interface WCFinderPrefetchStreamReportCGI : WCFinderBaseCgi

@property (nonatomic) unsigned long long tabType;
@property (retain, nonatomic) NSData *lastBuffer;

- (id)initWithTabType:(unsigned long long)a0 lastBuffer:(id)a1;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
