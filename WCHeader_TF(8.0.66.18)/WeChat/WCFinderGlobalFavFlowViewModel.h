@class NSArray, WCFinderGlobalFavFlowPageViewModel, WCFinderTopicInfo, NSString, NSMutableArray;
@protocol WCFinderGlobalFavListViewModelDelegate;

@interface WCFinderGlobalFavFlowViewModel : NSObject <WCFinderGlobalFavFeedTopicListDelegate, WCFinderDataItemExt>

@property (retain, nonatomic) NSMutableArray *pageViewModels;
@property (nonatomic) unsigned long long selectedTopicId;
@property (nonatomic) BOOL userFavChanged;
@property (nonatomic) long long totalCount;
@property (weak, nonatomic) id<WCFinderGlobalFavListViewModelDelegate> delegate;
@property (readonly, nonatomic) NSArray *topicInfos;
@property (readonly, nonatomic) WCFinderGlobalFavFlowPageViewModel *displayPageViewModel;
@property (readonly, nonatomic) WCFinderTopicInfo *selectedTopic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)allFeedPageViewModel;
- (id)pageViewModelForTopicId:(unsigned long long)a0;
- (void)selectTopicInfo:(id)a0;
- (void)updateTopics;
- (void)onFetchFavTagListUpdate:(id)a0;
- (id)findTopicListVM:(id)a0 fromExistsVMS:(id)a1;
- (void)onFavTagPageFeedBecomeEmpty:(id)a0;
- (void)onFinderDataItem:(id)a0 updateFavStateByExtention:(BOOL)a1;
- (void)onFinderDataItemCancelFav:(id)a0;
- (void).cxx_destruct;

@end
