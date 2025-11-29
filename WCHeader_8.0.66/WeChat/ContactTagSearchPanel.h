@class NSString, WCDataSearcher, MMUIViewController, NSMutableSet, NSArray, NSMutableArray, ContactTagSearchBottomBar;
@protocol ContactTagSearchPanelDelegate;

@interface ContactTagSearchPanel : NSObject <WCDataSearchDelegate, WCSearchDelegate>

@property (weak, nonatomic) MMUIViewController *contentViewController;
@property (retain, nonatomic) WCDataSearcher *searcher;
@property (retain, nonatomic) NSMutableArray *searchResult;
@property (retain, nonatomic) ContactTagSearchBottomBar *bottomBar;
@property (retain, nonatomic) NSMutableSet *selectedTags;
@property (retain, nonatomic) NSArray *forceSelectedTags;
@property (retain, nonatomic) NSArray *allTags;
@property (nonatomic) BOOL isMultiSelecting;
@property (weak, nonatomic) id<ContactTagSearchPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentViewController:(id)a0;
- (void)initSearcher;
- (void)initBottomBar;
- (void)dealloc;
- (void)wcsWillPresentSearch:(id)a0;
- (void)wcsDidPresentSearch:(id)a0;
- (void)wcsDidDismissSearch:(id)a0;
- (void)updateBottomBarSelectStatus:(BOOL)a0 count:(long long)a1;
- (void)startMultiSelect;
- (void)finishMultiSelect;
- (void)cancelMultiSelect;
- (BOOL)isSelected:(id)a0;
- (BOOL)isForceSelected:(id)a0;
- (void)doSearch:(id)a0 Pre:(BOOL)a1;
- (void)cancelSearch;
- (id)cellForIndex:(id)a0 ForSearchViewTable:(id)a1;
- (double)heightForSearchViewTable:(id)a0;
- (void)didSearchViewTableSelect:(id)a0;
- (long long)numberOfSectionsForSearchViewTable:(id)a0;
- (long long)numberOfRowsInSection:(long long)a0 ForSearchViewTable:(id)a1;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)keyboardDidShow:(id)a0;
- (void)keyboardDidHide:(id)a0;
- (void)onKeyboardNotificationWithoutAnimation:(id)a0;
- (void)onKeyboardNotification:(id)a0;
- (void).cxx_destruct;

@end
