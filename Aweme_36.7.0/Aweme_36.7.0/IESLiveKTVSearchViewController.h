@class UIStackView, IESLiveKTVSearchAssociationView, IESLiveWebpLoadingView, UIView, NSString, IESLiveKTVMusicListFeedbackView, IESLiveKTVOrderPanelSearchSectionModel, UIButton, IESLiveKTVSearchLabelsCarouselView, IESLiveKTVHistoryAndHotView, IESLiveInteractiveSearchTextField, IESLiveListView;

@interface IESLiveKTVSearchViewController : UIViewController <UITextFieldDelegate>

@property (retain, nonatomic) UIView *innerSearchBar;
@property (retain, nonatomic) UIView *searchBarContainerView;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) UIView *leftBarItem;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) IESLiveKTVHistoryAndHotView *historyAndHotView;
@property (retain, nonatomic) IESLiveKTVSearchAssociationView *associationView;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingIndicator;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) long long viewStyle;
@property (retain, nonatomic) IESLiveKTVSearchLabelsCarouselView *labelsCarouselView;
@property (copy, nonatomic) NSString *emptySearchText;
@property (retain, nonatomic) IESLiveKTVMusicListFeedbackView *musicListFeedbackView;
@property (nonatomic) double startLoadTime;
@property (nonatomic) double startLoadResultTime;
@property (nonatomic) long long scaleRatio;
@property (retain, nonatomic) IESLiveKTVOrderPanelSearchSectionModel *model;
@property (retain, nonatomic) UIView *searchBar;
@property (retain, nonatomic) UIButton *closeSearchButton;
@property (retain, nonatomic) IESLiveInteractiveSearchTextField *searchField;
@property (retain, nonatomic) IESLiveListView *searchListView;
@property (nonatomic) BOOL enableBlur;
@property (weak, nonatomic) UIView *navigationBar;
@property (copy, nonatomic) id /* block */ willEnterSearchAction;
@property (nonatomic) BOOL needTrack;
@property (copy, nonatomic) id /* block */ willExitSearchAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_addObserver;
- (void)setupSearchBarContainer;
- (void)exitSearchMode:(BOOL)a0;
- (id)initWithModel:(id)a0 viewStyle:(long long)a1;
- (void)enterSearchMode;
- (void)remakeSearchBarContainer:(BOOL)a0 animated:(BOOL)a1;
- (void)requestHotWordsAndRefreshCarouselView;
- (void)refreshHistoryListIfNeedWithField:(id)a0;
- (void)p_updateInnerSearchBarConstraintWithIsSearching:(BOOL)a0;
- (void)p_refreshUIWithIsSearching:(BOOL)a0;
- (void)p_updateCloseButtonVisible:(BOOL)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })p_innerSearchBarPaddingWithIsSearching:(BOOL)a0;
- (id)searchFieldPlaceHolderWithText:(id)a0;
- (void)startSearchWithShouldResignSearchFieldFirstResponder:(BOOL)a0 querySource:(int)a1;
- (id)p_sourceWithQuerySource:(int)a0;
- (id)p_baseColor;
- (void)startSearchWithQuerySource:(int)a0;
- (void)tr_pageShowEvent;
- (void)tr_trendingWordsClickWithWord:(id)a0 pos:(long long)a1 imprId:(id)a2;
- (void)tr_trendingWordsShowWithWord:(id)a0 pos:(long long)a1 imprId:(id)a2;
- (void)updateLeftBarItemView:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (void)setupConstraints;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)viewDidLoad;
- (void)reloadSections:(BOOL)a0;
- (void)setupViews;
- (void)textFieldDidChange;

@end
