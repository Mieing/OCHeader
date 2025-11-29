@class NSString, NSDictionary, AWEMVDataRequestTimingInfo, NSError, AWEUGInfoTrackerModel, AWEAwemeResponseModel;
@protocol AWEMVDataControllerProtocol;

@interface AWEMVDataRequestContext : NSObject

@property (nonatomic) unsigned long long stage;
@property (weak, nonatomic) id<AWEMVDataControllerProtocol> dataController;
@property (nonatomic) unsigned long long fetchType;
@property (nonatomic) unsigned long long refreshType;
@property (nonatomic) unsigned long long loadMoreType;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSDictionary *headerParams;
@property (retain, nonatomic) NSDictionary *queryParams;
@property (retain, nonatomic) NSDictionary *bodyParams;
@property (retain, nonatomic) NSDictionary *extraArgs;
@property (nonatomic) BOOL needCommonParams;
@property (readonly, nonatomic) NSDictionary *clientExtraParams;
@property (nonatomic) BOOL waitForConnectivity;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) AWEAwemeResponseModel *responseModel;
@property (retain, nonatomic) AWEUGInfoTrackerModel *ugInfoTrackModel;
@property (nonatomic) BOOL isLanding;
@property (copy, nonatomic) NSString *verticalID;
@property (nonatomic) BOOL isAdvanceRefresh;
@property (nonatomic) BOOL supplementTimeEnable;
@property (nonatomic) double supplementTime;
@property (readonly, nonatomic) AWEMVDataRequestTimingInfo *requestTimingInfo;
@property (nonatomic) BOOL didTrackListRefresh;
@property (nonatomic) BOOL isShowLoadMore;
@property (nonatomic) BOOL enableDataShardParser;
@property (nonatomic) BOOL enableChunkFetcher;
@property (nonatomic) long long originAwemeCount;
@property (nonatomic) BOOL shouldWaitDeviceID;

- (id)buildRequestURLWithDomainAndQueryParams;
- (id)initWithDataController:(id)a0 refreshType:(unsigned long long)a1;
- (void)updateExtraArgs:(id)a0;
- (id)initWithDataController:(id)a0 loadMoreType:(unsigned long long)a1;
- (id)initWithDataController:(id)a0 fetchType:(unsigned long long)a1;
- (void)updateDomain:(id)a0;
- (void)updateURL:(id)a0;
- (void)mergeQueryParams:(id)a0;
- (void)mergeBodyParams:(id)a0;
- (void)mergeHeaderParams:(id)a0;
- (void)stepToStage:(unsigned long long)a0;
- (void)updateDataController:(id)a0;
- (void)mergeClientExtraParams:(id)a0;
- (void).cxx_destruct;

@end
