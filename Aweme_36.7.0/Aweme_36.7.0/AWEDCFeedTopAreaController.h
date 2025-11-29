@class AWEDCFeedSearchBarManager, UIView;

@interface AWEDCFeedTopAreaController : AWEDCFeedBaseController

@property (retain, nonatomic) UIView *custormView;
@property (retain, nonatomic) AWEDCFeedSearchBarManager *searchBarManager;
@property (retain, nonatomic) UIView *separatorView;

- (void)containerScrollViewDidScroll:(id)a0;
- (void)containerViewWillAppear:(BOOL)a0;
- (void)containerViewWillDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)onLoadMoreListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)trigerSearchMagnifierClick;
- (id)topAreaConfig;
- (void)setSearchBarAlpha:(id)a0;
- (void)showSeparatorView:(id)a0;
- (id)containerViewModel;
- (id)classNameWithReferString;
- (void)setSearchBarPlaceHolderText:(id)a0;
- (void)trigerSearchBarClick;
- (void)trigerSearchButtonClick;
- (void)trigerFetchGuessWord;
- (void)setupNoti;
- (void)updateViewFrameIfNeededWithScrollView:(id)a0;
- (double)calculateCustorViewOffsetWithScrollView:(id)a0;
- (void).cxx_destruct;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewDidLoad;

@end
