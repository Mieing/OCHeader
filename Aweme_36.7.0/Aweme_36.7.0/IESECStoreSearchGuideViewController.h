@class IESECQualityInfoV2, NSString, NSDictionary, IESECStoreSearchHotView, IESECStoreSearchHotViewModel, IESECStoreSearchHistoryView, NSMutableArray, UIPanGestureRecognizer, UIScrollView;
@protocol IESECStoreSearchGuideViewControllerDelegate;

@interface IESECStoreSearchGuideViewController : UIViewController <IESECStoreSearchHistoryViewDelegate, IESECStoreSearchHotViewDelegate, UIGestureRecognizerDelegate> {
    BOOL _isFirstSearchHot;
    BOOL _willFirstLayout;
    BOOL _didFirstLayout;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) UIScrollView *contentScrollView;
@property (retain, nonatomic) IESECStoreSearchHistoryView *historyView;
@property (retain, nonatomic) NSMutableArray *searchHistory;
@property (retain, nonatomic) IESECStoreSearchHotView *hotView;
@property (retain, nonatomic) IESECStoreSearchHotViewModel *hotViewModel;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (weak, nonatomic) id<IESECStoreSearchGuideViewControllerDelegate> delegate;
@property (retain, nonatomic) IESECQualityInfoV2 *qualityInfo;
@property (nonatomic) BOOL firstDataReady;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (void)fetchHotWords;
- (id)initWithIdentifier:(id)a0 containerType:(long long)a1 extraParams:(id)a2;
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
