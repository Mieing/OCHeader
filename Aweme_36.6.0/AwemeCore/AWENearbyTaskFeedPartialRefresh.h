@class AWENearbyTaskFeedPartialRefreshModel;

@interface AWENearbyTaskFeedPartialRefresh : AWENearbyBaseTask

@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) AWENearbyTaskFeedPartialRefreshModel *refreshModel;

+ (void)_aweLazyRegisterStaticLoad;

- (id)initWithRefreshModel:(id)a0 executor:(id /* block */)a1;
- (BOOL)mergeAndUpdateDataList:(id)a0 updateInfo:(id)a1;
- (void)updateLynxCardDataWithAweme:(id)a0 data:(id)a1;
- (void)updateAweme:(id)a0 data:(id)a1;
- (void).cxx_destruct;
- (void)executeWithContext:(id)a0;
- (id)triggerType;

@end
