@class NSString, WCStoryFloatTopBar, TextStateHistoryLogic, TextStateCardListViewController, TextStateHistoryCalendarCollectionView;

@interface TextStateHistoryCalendarViewController : MMUIViewController <TextStateHistoryCalendarCollectionViewDelegate, TextStateCardListDelegate, TextStateHistoryLogicDelegate>

@property (retain, nonatomic) TextStateHistoryCalendarCollectionView *collectionView;
@property (retain, nonatomic) WCStoryFloatTopBar *topBar;
@property (nonatomic) unsigned long long enterTime;
@property (retain, nonatomic) TextStateHistoryLogic *historyLogic;
@property (nonatomic) BOOL canSelect;
@property (weak, nonatomic) TextStateCardListViewController *cardListViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (BOOL)disableScrollViewBottomInsetAdjustment;
- (void)initView;
- (void)initData;
- (void)refreshSceneSessionId;
- (void)fetchDataWithNeedLoading:(BOOL)a0;
- (void)reportAction:(long long)a0;
- (void)collectionView:(id)a0 didSelectSectionAtIndex:(unsigned long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionViewDidSelectStoryEntry:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)continueFetchDataIfNeeded;
- (void)shouldReloadCardList;
- (void)shouldReloadCalendar;
- (void)shouldLocateCalendarToItemAtIndexPath:(id)a0;
- (void).cxx_destruct;

@end
