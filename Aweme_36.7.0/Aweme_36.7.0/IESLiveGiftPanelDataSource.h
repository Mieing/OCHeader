@class NSDictionary, NSMutableDictionary, NSString;
@protocol IESLiveGiftPanelDataSourceRequestDelegate;

@interface IESLiveGiftPanelDataSource : NSObject <IESLiveGiftPanelDataSourceDelegate>

@property (retain, nonatomic) NSMutableDictionary *remainingGiftsMap;
@property (copy, nonatomic) NSDictionary *requestCountForPageMap;
@property (retain, nonatomic) NSMutableDictionary *fetchIncrementalGiftListTaskMap;
@property (weak, nonatomic) id<IESLiveGiftPanelDataSourceRequestDelegate> delegate;
@property (nonatomic) BOOL isRequesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateRemainingGiftIDsForPage:(id)a0 gifts:(id)a1;
- (long long)remainingGiftCountForPage:(id)a0;
- (void)fetchIncrementalGiftsForPage:(id)a0 topicId:(id)a1 completion:(id /* block */)a2;
- (BOOL)canLoadMoreGiftForPage:(id)a0 topicId:(id)a1;
- (void)resetAllRemainingGiftIDs;
- (void)cancelAllAutoIncrementalFetchTasks;
- (void)scheduleAutoIncrementalFetchTasksForPage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
