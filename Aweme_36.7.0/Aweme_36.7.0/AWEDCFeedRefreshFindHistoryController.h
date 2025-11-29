@class NSString, AWEAwemeModel, NSMutableArray, DUXToast;

@interface AWEDCFeedRefreshFindHistoryController : AWEDCFeedBaseController <AWEDCFeedRefreshFindHistoryControllerProtocol>

@property (retain, nonatomic) NSMutableArray *historyAwemeArray;
@property (copy, nonatomic) id /* block */ hideFindBlock;
@property (nonatomic) BOOL couldCancelHideBlock;
@property (retain, nonatomic) DUXToast *toast;
@property (nonatomic) BOOL fetchDataEndInPreview;
@property (nonatomic) BOOL isExistDivider;
@property (nonatomic) struct CGPoint { double x; double y; } beforeOffset;
@property (nonatomic) BOOL shouldRecovery;
@property (retain, nonatomic) AWEAwemeModel *historyContinuePlayModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showToast;
- (void)containerViewWillDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)onRefreshListDataStartWithRefreshReason:(unsigned long long)a0;
- (void)onFetchListDataBeforeEndWithReason:(unsigned long long)a0 response:(id)a1;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 originalTargetContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)refreshWithHistory;
- (void)historyCellModel:(id)a0;
- (void)removeContinuePlayModelWhenPlayableCardInHistoryCard;
- (void)shouldShowFindHistoryCellToast:(unsigned long long)a0;
- (void)processContinuePlayModel;
- (void)recordHistoryModelItemID;
- (id)sortedIndexPaths:(id)a0;
- (void).cxx_destruct;

@end
