@class IESECShopSearchOldHotView, NSString, IESECQualityInfoV2, NSDictionary, NSMutableArray, IESECShopSearchOldHotViewModel, IESECShopSearchOldHistoryView, UIPanGestureRecognizer, UIScrollView;
@protocol IESECShopSearchGuideViewControllerDelegate;

@interface IESECShopSearchOldGuideViewController : UIViewController <IESECShopSearchOldHistoryViewDelegate, IESECShopSearchOldHotViewDelegate, UIGestureRecognizerDelegate, IESECShopSearchGuideViewControllerProtocol> {
    BOOL _isFirstSearchHot;
    BOOL _willFirstLayout;
    BOOL _didFirstLayout;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) UIScrollView *contentScrollView;
@property (retain, nonatomic) IESECShopSearchOldHistoryView *historyView;
@property (retain, nonatomic) NSMutableArray *searchHistory;
@property (retain, nonatomic) IESECShopSearchOldHotView *hotView;
@property (retain, nonatomic) IESECShopSearchOldHotViewModel *hotViewModel;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESECShopSearchGuideViewControllerDelegate> delegate;
@property (retain, nonatomic) IESECQualityInfoV2 *qualityInfo;
@property (nonatomic) BOOL firstDataReady;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)configBtmTrackerV2;
- (void)configBTMTracker;
- (void)addSearchWord:(id)a0;
- (void)loadSearchHistory;
- (void)updateSearchHistoryCache;
- (id)searchHistoryCacheKey;
- (void)searchHistoryView:(id)a0 didSelectSearchWord:(id)a1 curIdx:(unsigned long long)a2;
- (void)searchHistoryView:(id)a0 deleteSearchWord:(id)a1 curIdx:(unsigned long long)a2 clearAll:(BOOL)a3;
- (void)searchHotViewDidTapRefreshButton:(id)a0;
- (void)searchHotView:(id)a0 willDisplaySearchWord:(id)a1 atIndex:(long long)a2;
- (void)searchHotView:(id)a0 didSelectSearchWord:(id)a1 atIndex:(long long)a2;
- (id)initWithIdentifier:(id)a0 extraParams:(id)a1;
- (void)fetchHotWords;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)endEditing;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)finishEditing;
- (void)setupViews;
- (void)addObservers;

@end
