@class AWEAwemeModel, AWELivePreStreamLiveCardModel, NSString, AWELivePreStreamLiveDistributeHeaderView, NSMutableArray, AWELivePreStreamContext, AWELivePreStreamLiveDistributeFooterView, AWELivePreStreamLiveCardSectionConfig;
@protocol AWELivePreStreamLiveDistributeElementAndSectionControllerDelegate;

@interface AWELivePreStreamLiveDistributeSectionController : IGListSectionController <IGListSupplementaryViewSource, IGListDisplayDelegate, IGListAdapterDelegate>

@property (retain, nonatomic) AWELivePreStreamLiveCardModel *object;
@property (readonly, nonatomic) AWELivePreStreamLiveCardSectionConfig *config;
@property (readonly, nonatomic) AWELivePreStreamContext *context;
@property (weak, nonatomic) AWELivePreStreamLiveDistributeHeaderView *headerView;
@property (weak, nonatomic) AWELivePreStreamLiveDistributeFooterView *footerView;
@property (retain, nonatomic) NSMutableArray *displayedRoomIds;
@property (copy, nonatomic) id /* block */ didClickCloseBlock;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) BOOL hasScrollInnerFeed;
@property (weak, nonatomic) id<AWELivePreStreamLiveDistributeElementAndSectionControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ didClickLiveCardBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (id)initWithConfig:(id)a0 context:(id)a1;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:(id)a0 atIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)a0 atIndex:(long long)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)didUpdateToObject:(id)a0;
- (void)reShowTitleLabel;
- (void)footerView_countLabelRestart;
- (void)footerView_countLabelStop;
- (BOOL)p_isGameScene;
- (void)headerView_setTextWithString:(id)a0;
- (void)footerView_countLabelStartCount:(long long)a0 timeFormatBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)p_handleApplicationTerminate:(id)a0;
- (void)p_trackAggrCardClickAtIndex:(long long)a0;
- (void)p_trackCloseAggregateCardAtIndex:(long long)a0;
- (void)p_postUnreadRooms;
- (void)p_trackAggrCardShowAtIndex:(long long)a0;
- (void)p_addDisplayRoom:(long long)a0;
- (void)p_trackAggrCardSeedRoomShow;
- (void)p_postGameDistributeRoomShow;
- (void)headerView_closeHidden;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
