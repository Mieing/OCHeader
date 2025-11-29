@class RingToneRecommendReporter_23604, WCSearcher, RingToneSearchProxy, MMTableView, RingToneDetail, NSString, MMUIActivityIndicatorView, RingToneMixPlayer, MMTListAdapter, CContact, RingTonePickerViewModel, WCTimeLineFooterView;

@interface RingTonePickerViewController : MMUIViewController <MMRefreshTableFooterDelegate, MMTListAdapterDataSource, UIScrollViewDelegate, RingTonePickerSectionControllerDelegate, RingToneSearchProxyDelegate, IVOIPWindowExt, ServiceAuthExt, RingRecommendSwitchDelegate, IOplogExt> {
    BOOL _isFetchingData;
    BOOL _isFromOutside;
    BOOL _isShowingSelected;
    unsigned int _exposeIndex;
    long long _reportIndex;
}

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) WCSearcher *searcher;
@property (retain, nonatomic) RingToneSearchProxy *searchProxy;
@property (retain, nonatomic) RingTonePickerViewModel *viewModel;
@property (retain, nonatomic) WCTimeLineFooterView *footerView;
@property (retain, nonatomic) CContact *exclusiveContact;
@property (retain, nonatomic) RingToneRecommendReporter_23604 *reporter;
@property (retain, nonatomic) MMTListAdapter *listAdapter;
@property (retain, nonatomic) RingToneDetail *ring;
@property (retain, nonatomic) NSString *friendName;
@property (retain, nonatomic) MMUIActivityIndicatorView *indicator;
@property (retain, nonatomic) RingToneMixPlayer *player;
@property (nonatomic) BOOL isJumpToOtherPage;
@property (nonatomic) BOOL isJumpToSearchPage;
@property (nonatomic) BOOL ringRecommendSwitch;
@property (nonatomic) unsigned long long setType;
@property (nonatomic) BOOL shouldNotShowFriendSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)constructRingDetailPickerViewController:(id)a0 friendName:(id)a1;
+ (id)constructRingTonePickerViewController:(id)a0 friendName:(id)a1;

- (void)viewDidLoad;
- (void)stopAllPlay;
- (id)initFromOutside:(id)a0;
- (id)init;
- (void)initView;
- (void)onClickMore:(id)a0;
- (void)preInitJob;
- (void)setTypeAndCContact:(unsigned long long)a0 contact:(id)a1;
- (id)navigationBarBackgroundColor;
- (BOOL)showNavigationBarSepLine;
- (void)configView;
- (void)onBack;
- (void)initData;
- (void)initReporter;
- (void)initFooterView;
- (void)initTableView;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setPopGestureForVC:(id)a0;
- (void)removeCellSelectedStatus;
- (void)jumpToAuthorPage:(id)a0;
- (void)refreshForTableView;
- (void)initSearchBar;
- (void)fetchNextPage:(BOOL)a0 pullType:(unsigned long long)a1;
- (void)highlightFirstCell;
- (void)traitCollectionDidChange:(id)a0;
- (void)onShowRecommendWarnPageSheet;
- (void)scrollViewDidScroll:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (void)didSelectRowAtIndex:(long long)a0;
- (void)willDisplayCellAtIndex:(long long)a0;
- (void)onExclusiveRingPlay:(id)a0 isToPlay:(BOOL)a1;
- (id)getFriendName;
- (void)stopAllRingPlay;
- (void)jumpToPlayerPage:(id)a0 index:(long long)a1;
- (void)jumpToPlayerPage:(id)a0 index:(long long)a1 searchID:(long long)a2;
- (void)setSearchState:(BOOL)a0;
- (void)onVoipWindowDidAppear;
- (void)ringRecommendSwitch:(BOOL)a0;
- (void)oplogRet:(int)a0 errMsg:(id)a1 eventID:(unsigned int)a2 cgiWrap:(id)a3;
- (void).cxx_destruct;

@end
