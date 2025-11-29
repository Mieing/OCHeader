@class NSString, UIView, UISearchBar, UIButton;
@protocol IESIMHalfScreenSearchViewDelegate, IESIMHalfScreenSearchViewInternalSearchBar;

@interface AWEIMHalfScreenSearchView : UIView <UISearchBarDelegate, IESIMHalfScreenSearchView>

@property (retain, nonatomic) UISearchBar<IESIMHalfScreenSearchViewInternalSearchBar> *searchBar;
@property (retain, nonatomic) UIView *seprarateLine;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIView *bottomLine;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *searchText;
@property (weak, nonatomic) id<IESIMHalfScreenSearchViewDelegate> delegate;
@property (copy, nonatomic) NSString *placeHolderText;
@property (nonatomic) BOOL needSeprarateLine;
@property (nonatomic) BOOL keepCancelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_cancelButtonTapped;
- (void)finishSearch;
- (void)endInputText;
- (void)p_hideCancelButton;
- (void)p_showCancelButton;
- (void)setupFlexibleHeight;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0;
- (void)searchBarSearchButtonClicked:(id)a0;

@end
