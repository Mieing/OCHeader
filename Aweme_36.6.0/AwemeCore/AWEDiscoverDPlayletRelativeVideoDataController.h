@class NSNumber, NSMutableDictionary, NSString;

@interface AWEDiscoverDPlayletRelativeVideoDataController : AWEDiscoverDPlayletBaseDataController <AWEDiscoverDPlayletRelativeVideoSubDataDelegate>

@property (retain, nonatomic) NSMutableDictionary *dataModels;
@property (retain, nonatomic) NSNumber *currentTag;
@property (retain, nonatomic) NSString *currentPlayletId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)loadmoreHasMore;
- (BOOL)isRequestOnAir;
- (void)loadPreviousWithCompletion:(id /* block */)a0;
- (void)reloadWithPullType:(long long)a0 Completion:(id /* block */)a1;
- (void)setRelativeSubTagId:(id)a0 AwemeId:(id)a1 playletId:(id)a2 complete:(id /* block */)a3;
- (id)getRelativeVideoDataModelWithTag:(id)a0 playletId:(id)a1;
- (id)currentRelativeVideoDataModel;
- (id)findModelWithSubDataController:(id)a0 paramsModel:(id)a1;
- (id)getBaseDataModel;
- (id)getPerformanceEvent;
- (id)getStageMonitorCommonParams:(id)a0;
- (void)lynxLoreMoreAwemeListWithParamsModel:(id)a0 complete:(id /* block */)a1;
- (id)findModelWithRelativeSubTagId:(id)a0 AwemeId:(id)a1 playletId:(id)a2;
- (void).cxx_destruct;
- (id)dataSource;
- (id)initWithDataModel:(id)a0;
- (id)filteredDataSource;

@end
