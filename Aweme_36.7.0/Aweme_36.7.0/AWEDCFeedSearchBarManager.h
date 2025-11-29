@class NSTimer, UIView, NSArray, AWEAwemeModel, NSString, NSDictionary, AWEDCFeedEnterModel, AWEDCFeedPageContext;
@protocol AWEDCFeedSearchBarProtocol;

@interface AWEDCFeedSearchBarManager : NSObject

@property (weak, nonatomic) AWEDCFeedPageContext *context;
@property (retain, nonatomic) UIView<AWEDCFeedSearchBarProtocol> *searchBarView;
@property (retain, nonatomic) NSDictionary *searchBarMiddleBasicParams;
@property (retain, nonatomic) NSDictionary *searchBarResultBasicParams;
@property (retain, nonatomic) NSDictionary *searchMagnifierBasicParams;
@property (retain, nonatomic) AWEAwemeModel *lastClickAweme;
@property (nonatomic) BOOL isRequestiongGuessWord;
@property (retain, nonatomic) NSArray *wordModels;
@property (retain, nonatomic) NSString *guessWordLogID;
@property (retain, nonatomic) NSString *sarFrom;
@property (retain, nonatomic) NSString *wordID;
@property (retain, nonatomic) NSTimer *fetchGuessTimer;
@property (nonatomic) double minOriginY;
@property (nonatomic) double lastRequestTime;
@property (retain, nonatomic) AWEDCFeedEnterModel *lastEnterModel;
@property (nonatomic) BOOL hasEnterSearchPage;

- (id)classNameWithReferString;
- (void)setupSearchBar:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)searchBarConfig;
- (void)searchButtonClicked;
- (void)searchMagnifierClicked;
- (void)fetchGuessWordWithOptionIfNeed:(unsigned long long)a0;
- (id)getSearchBarDefaultParams;
- (id)getSearchBarClickedURLWithContext:(id)a0;
- (id)getSearchButtonDefaultParams;
- (void)trackSearchWordsClick;
- (id)getSearchButtonClickedURLWithContext:(id)a0;
- (id)getSearchMagnifierDefaultParams;
- (id)getSearchMagnifierClickedURLWithContext:(id)a0;
- (BOOL)isGuessWordSatisfiedWithOption:(unsigned long long)a0;
- (id)getGuessWordParamsWithOption:(unsigned long long)a0;
- (void)dealWithResponse;
- (id)getSearchEventParamsExtra;
- (void)trackSearchWordsShow;
- (BOOL)isPlaceHolderDefaultText;
- (id)initWithContext:(id)a0 containerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateViewFrameIfNeededWithScrollView:(id)a0;
- (void)updateInfoWithItemClicked:(id)a0;
- (void)resetInerGuessWordInfo;
- (void)initFetchGuessTimerIfNeeded;
- (void)invalidFetchGuessTimer;
- (void)trackSearchBarShow;
- (double)left;
- (void).cxx_destruct;
- (double)bottom;
- (double)top;
- (double)right;
- (void)searchBarClicked;

@end
