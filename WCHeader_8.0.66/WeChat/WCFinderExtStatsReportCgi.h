@class NSString;

@interface WCFinderExtStatsReportCgi : WCFinderBaseCgi

@property (nonatomic) int commentScene;
@property (retain, nonatomic) NSString *extraKey;

- (id)initWithDataItems:(id)a0 commentScene:(int)a1;
- (id)initWithExtStatsArray:(id)a0 actionType:(unsigned int)a1 commentScene:(int)a2 extraKey:(id)a3;
- (id)initWithExtStatsReddotInfo:(id)a0 redDotObjectId:(unsigned long long)a1;
- (void)createRequestWithDataItems:(id)a0;
- (void)createRequestWithExtStatsArray:(id)a0 actionType:(unsigned int)a1;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
