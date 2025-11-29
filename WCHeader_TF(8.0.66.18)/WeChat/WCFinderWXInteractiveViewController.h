@class WCFinderArbitraryPageView, NSString, WCFinderWXInteractiveViewModel, WCFinderContact;

@interface WCFinderWXInteractiveViewController : MMUIViewController <WCFinderArbitraryPageViewDataDelegate, WCFinderArbitraryPageViewDataSource, WCFinderWXInteractivePageDelegate>

@property (retain, nonatomic) WCFinderWXInteractiveViewModel *viewModel;
@property (retain, nonatomic) WCFinderArbitraryPageView *pageView;
@property (retain, nonatomic) WCFinderContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUserPrepare:(id)a0;
- (void)viewDidLoad;
- (void)setupMenuItems;
- (id)makeSearchBtn;
- (id)makeMoreBtn;
- (id)arbitraryTabView:(id)a0 pageTabNameForIdentifier:(id)a1 index:(long long)a2;
- (id)arbitraryTabView:(id)a0 pageViewController:(id)a1 index:(long long)a2;
- (void)onClickSearch;
- (void)onClickMore;
- (void)onLimitClick;
- (void)onWXInteractiveTabChanges:(id)a0;
- (void).cxx_destruct;

@end
