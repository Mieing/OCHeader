@class MMFinderLiveProductsTableView, NSString, MMUITextField, WCFinderAnimationLoadingView, UITapGestureRecognizer, NSDate, UIButton, MMFinderLiveTaskId, MMUIButton, UILabel;
@protocol MMFinderLiveProductsSearchViewDelegate;

@interface MMFinderLiveProductsSearchView : UIView <UITextFieldDelegate, UIGestureRecognizerDelegate, MMFinderLiveShopShelfPage>

@property (retain, nonatomic) MMFinderLiveTaskId *taskID;
@property (weak, nonatomic) id<MMFinderLiveProductsSearchViewDelegate> delegate;
@property (retain, nonatomic) MMFinderLiveProductsTableView *tableView;
@property (retain, nonatomic) MMUIButton *backButton;
@property (retain, nonatomic) UILabel *hintWordingLabel;
@property (retain, nonatomic) MMUITextField *textField;
@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) NSString *keyword;
@property (nonatomic) BOOL isSearching;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) NSDate *appearDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 taskID:(id)a1 delegate:(id)a2;
- (void)initSubviews;
- (void)onBackButtonClicked;
- (void)layoutSubviews;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)onSearchButtonClicked;
- (void)searchIfNeeded;
- (void)handleSearchResults:(id)a0 keyword:(id)a1;
- (void)reportSearchResultIfNeeded:(id)a0 keyword:(id)a1;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)focusOnTextField;
- (void)onTap;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)pageWillAppear;
- (void)pageDidDisappear;
- (void).cxx_destruct;

@end
