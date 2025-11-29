@class AFDSettingSearchEngine, NSString, NSArray, NSDictionary, UITableView;

@interface AFDSettingSearchViewController : UIViewController <UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource, AFDSettingSearchViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) long long colorStyle;
@property (retain, nonatomic) NSArray *searchResults;
@property (retain, nonatomic) AFDSettingSearchEngine *searchEngine;
@property (nonatomic) double settingSearchTrackDelay;
@property (copy, nonatomic) NSDictionary *searchTrackParams;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) id /* block */ rootItemDidSelectedBlock;
@property (copy, nonatomic) id /* block */ cancelSearchBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)p_fetchData;
- (id)initWithColorStyle:(long long)a0;
- (void)p_setViewBackGroundColor;
- (void)tabDidClick;
- (void)trackEventForSearchWithKeyword:(id)a0 sections:(id)a1;
- (void)trackEventForClickWithKeyword:(id)a0 sections:(id)a1 settingSection:(id)a2 resultItem:(id)a3 indexPath:(id)a4;
- (void)addThemeChangeObserver;
- (void)p_didThemeChanged;
- (void)trackEventForSearch;
- (id)searchResultStringWithSections:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)endRefreshing;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)reset;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)beginSearch;

@end
