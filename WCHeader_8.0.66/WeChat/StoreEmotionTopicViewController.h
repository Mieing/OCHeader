@class MMTableView, NSString, EmotionBannerSet, LoopPageScrollView, StoreEmotionGetEmotionListCgi, StoreEmotionPageShareLogic, MMLoadingView, NSMutableArray, EmotionStoreRecList, ShareMessageConfirmLogicHelper, EmoticonStoreFootView;

@interface StoreEmotionTopicViewController : MMUIViewController <LoopPageScrollViewDataSourceDelegate, UITableViewDataSource, UITableViewDelegate, MMTableViewDelegate, MMEmotionChartsCellDelegate, MMRefreshTableFooterDelegate, StoreEmotionGetEmotionListCgiDelegate, StoreEmotionPageShareLogicDelegate> {
    LoopPageScrollView *_bannerView;
    MMTableView *_tableView;
    EmoticonStoreFootView *_tailView;
    EmotionBannerSet *_storeAd;
    NSMutableArray *_topicEmotionList;
    ShareMessageConfirmLogicHelper *_shareMessageHelper;
    MMLoadingView *_shareLoadingView;
    StoreEmotionGetEmotionListCgi *m_getEmotionListCgi;
    StoreEmotionPageShareLogic *m_shareLogic;
    EmotionStoreRecList *m_recommendRecord;
    int m_extranceScene;
}

@property (nonatomic) BOOL didLoadData;
@property (nonatomic) unsigned long long sessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBannerSet:(id)a0 extrance:(int)a1;
- (id)initWithRecommendRecord:(id)a0 entrance:(int)a1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)setupData;
- (void)setupViews;
- (void)setupTableView;
- (void)initTableFooterView;
- (void)setupNoContentView;
- (void)reloadData;
- (void)setupRightBarButton;
- (void)onOperate:(id)a0;
- (void)reportExpose;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void)onGetEmotionListFinishedWithReqType:(unsigned int)a0 Response:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)viewForPage:(id)a0 pageNum:(unsigned int)a1;
- (int)totalNumOfPage;
- (void)didChangeToPage:(unsigned int)a0;
- (void)didTapPageAtNum:(unsigned int)a0;
- (void)OnEmotionChartsCellTapButton:(id)a0;
- (void).cxx_destruct;

@end
