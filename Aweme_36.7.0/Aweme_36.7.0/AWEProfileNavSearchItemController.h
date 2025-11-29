@class DUXPopover, NSString, AWEUserPersonalSearchButton, UIView, UILabel;
@protocol AWEProfileNavigationContainerDelegate;

@interface AWEProfileNavSearchItemController : NSObject <AWEProfileNavigationItemControllerProtocol>

@property (retain, nonatomic) UIView *searchItemView;
@property (retain, nonatomic) AWEUserPersonalSearchButton *searchBtn;
@property (retain, nonatomic) DUXPopover *searchGuidePopover;
@property (retain, nonatomic) UIView *searchBar;
@property (retain, nonatomic) UILabel *searchBarLabel;
@property (copy, nonatomic) NSString *searchBarLabelText;
@property (weak, nonatomic) id<AWEProfileNavigationContainerDelegate> delegate;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShow;
- (void)searchButtonClicked;
- (id)profileContext;
- (BOOL)canShowSearchBar;
- (void)onReloadUI:(id)a0 isCache:(BOOL)a1;
- (void)onDidRequestUser:(id)a0 error:(id)a1;
- (id)navigationItemView;
- (BOOL)disableProfileScrollingAlphaChange;
- (void)onNavigationStickToTop:(BOOL)a0;
- (void)onThemeChange:(BOOL)a0;
- (BOOL)enableSearchEntranceEnhanced;
- (id)scrollToTopComponent;
- (id)postworkDetailComponent;
- (void)showUserSearchGuide;
- (void)layoutSearchBarAndSearchBtn:(BOOL)a0;
- (void)trackSearchItemShown;
- (void)updateSearchBarPlaceHolderText:(id)a0;
- (id)searchBarPlaceholderText:(id)a0;
- (id)navigationComponent;
- (BOOL)isShowingSearchBar;
- (struct CGSize { double x0; double x1; })searchBtnSize;
- (id)padComponent;
- (void)adjustSearchBarLabelText;
- (void)showUserSearchGuideHome;
- (void)showUserSearchGuideDetail;
- (BOOL)topBtnHasShownPopover;
- (void)setTopBtnHasShownPopover;
- (id)replaceGenderTextWith:(id)a0 text:(id)a1;
- (struct CGSize { double x0; double x1; })itemSize;
- (struct CGSize { double x0; double x1; })searchBarSize;
- (void).cxx_destruct;
- (BOOL)isCurrentUser;
- (void)viewWillDisappear;

@end
