@class NSTimer, NSMutableDictionary;

@interface IESECMarketingDataCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *pageMap;
@property (retain, nonatomic) NSMutableDictionary *pageDataMap;
@property (retain, nonatomic) NSMutableDictionary *pageBuilderMap;
@property (retain, nonatomic) NSMutableDictionary *bizDataMap;
@property (retain, nonatomic) NSTimer *scrollTimer;
@property (nonatomic) long long scrollFlag;

+ (id)sharedInstance;

- (void)sendFeedDidScrollEvent;
- (void)showWithParamsBuilder:(id)a0 completion:(id /* block */)a1;
- (id)marketingConfig;
- (id)getMarketingStorage:(id)a0;
- (id)pageMetaForPageId:(id)a0;
- (id)loadWithBuilder:(id)a0 completion:(id /* block */)a1;
- (void)removeWithPageVC:(id)a0 rit:(id)a1 component:(id)a2 completion:(id /* block */)a3;
- (void)removeWithPageId:(id)a0 rit:(id)a1 component:(id)a2 completion:(id /* block */)a3;
- (void)sendEventWithPageVC:(id)a0 rit:(id)a1 component:(id)a2 eventName:(id)a3 params:(id)a4;
- (void)sendEventWithPageId:(id)a0 eventName:(id)a1 params:(id)a2;
- (void)registerWithBuilder:(id)a0 completion:(id /* block */)a1;
- (id)builderForPageId:(id)a0;
- (id)getMarketingStorage:(id)a0 options:(unsigned long long)a1;
- (id)getPageKeyWithVC:(id)a0 useDefault:(BOOL)a1;
- (id)bizDataForBizId:(id)a0;
- (void)closeWithPage:(id)a0 rit:(id)a1 component:(id)a2 completion:(id /* block */)a3;
- (void)sendEventWithPageId:(id)a0 rit:(id)a1 component:(id)a2 eventName:(id)a3 params:(id)a4;
- (void)getDataWithPage:(id)a0 rit:(id)a1 component:(id)a2 completion:(id /* block */)a3;
- (void)getPositionWithPage:(id)a0 rit:(id)a1 component:(id)a2 params:(id)a3 completion:(id /* block */)a4;
- (void)hideOrReveal:(BOOL)a0 page:(id)a1 rit:(id)a2 component:(id)a3 completion:(id /* block */)a4;
- (void)updateComponentLayoutWithPageId:(id)a0 rit:(id)a1 component:(id)a2 layoutInfo:(id)a3;
- (void)loadWithPage:(id)a0 data:(id)a1 completion:(id /* block */)a2;
- (void)openWithPage:(id)a0 rit:(id)a1 component:(id)a2 customData:(id)a3 params:(id)a4 completion:(id /* block */)a5;
- (void)openWithPage:(id)a0 rit:(id)a1 component:(id)a2 schema:(id)a3 params:(id)a4 completion:(id /* block */)a5;
- (void)setMemoryDataWithBizId:(id)a0 pageId:(id)a1 bizData:(id)a2;
- (id)pageDataForPageId:(id)a0;
- (void)submitTaskWithData:(id)a0 taskConfig:(id)a1 extraData:(id)a2 completion:(id /* block */)a3;
- (void)updateWithPage:(id)a0 rit:(id)a1 component:(id)a2 data:(id)a3 completion:(id /* block */)a4;
- (id)getPageMetaWithKey:(id)a0 viewController:(id)a1 createIfNeeded:(BOOL)a2;
- (void)refreshPageMapIfNeeded;
- (void)addMarketingLifecycleListener:(id)a0;
- (id)globalPropsWithBuilder:(id)a0;
- (void)setupPageMeta:(id)a0 perfModel:(id)a1;
- (id)resourceSlots:(id)a0;
- (id)getStorageJsonString;
- (void)sendScrollDidEndEvent:(id)a0;
- (void)requestWithBuilder:(id)a0 completion:(id /* block */)a1;
- (id)marketingRitConfig;
- (id)marketingDefaultRit:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)appDidEnterBackground:(id)a0;
- (void)appWillEnterForeground:(id)a0;

@end
