@class BDPDrawAdModel, NSString, TVLManager, NSMutableArray;

@interface BDPDrawAdDataManger : NSObject <BDPDrawAdDataProtocol>

@property (retain, nonatomic) BDPDrawAdModel *drawAdModel;
@property (retain, nonatomic) NSMutableArray *blkArr;
@property (retain, nonatomic) TVLManager *tvlManager;
@property (nonatomic) long long adDataLoadStatus;
@property (nonatomic) long long preloadStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)p_callbackWithError:(id)a0;
- (void)preloadDrawAdDataWithUniqueId:(id)a0 adUnitId:(id)a1 componentId:(id)a2 completion:(id /* block */)a3;
- (void)readDrawAdData:(id /* block */)a0;
- (id)getTVLManagerWithAdModel:(id)a0;
- (void)drawAdAlreadyShow;
- (void)requestDrawAdDataWithUniqueId:(id)a0 adUnitId:(id)a1 componentId:(id)a2 completion:(id /* block */)a3;
- (void)p_requestDrawAdDataWithUniqueId:(id)a0 adUnitId:(id)a1 componentId:(id)a2 completion:(id /* block */)a3;
- (id)p_getTVLManagerWithAdModel:(id)a0;
- (void).cxx_destruct;

@end
