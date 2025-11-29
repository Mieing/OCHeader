@class IESLiveEmptyView, IESLiveEmptyViewConfig, UIView, NSString, UIButton, UITableView, IESLivePKGuestAvatarsCombineView, IESLivePKGuestSearchTextField;
@protocol IESLiveScrollRefreshService, IESHYContainerProtocol;

@interface IESLivePKGuestInteractiveListView : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) IESLiveEmptyView *emptyView;
@property (retain, nonatomic) IESLiveEmptyViewConfig *emptyViewConfig;
@property (retain, nonatomic) IESLivePKGuestAvatarsCombineView *avatarsView;
@property (nonatomic) BOOL isSearchMode;
@property (retain, nonatomic) IESLivePKGuestSearchTextField *searchTF;
@property (retain, nonatomic) UIButton *cancelSearchButton;
@property (retain, nonatomic) id<IESLiveScrollRefreshService> scrollRefreshService;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (retain, nonatomic) UIView *bottomContainer;
@property (nonatomic) double emptyViewTopOffset;
@property (nonatomic) BOOL enableSearch;
@property (readonly, copy, nonatomic) NSString *searchText;
@property (copy, nonatomic) id /* block */ didEnterSearchMode;
@property (copy, nonatomic) id /* block */ didExitSearchMode;
@property (copy, nonatomic) id /* block */ didSearchTextChanged;
@property (copy, nonatomic) id /* block */ didSearchTextReturned;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showEmpty;
- (void)loadHybridContainerWithURL:(id)a0;
- (void)hideEmpty;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tableViewStyle:(long long)a1;
- (void)updateEmptyConfig;
- (void)updateEmptyConstraint;
- (void)p_exitSearchMode;
- (void)p_enterSearchMode;
- (void)updateEmptyTopOffset:(double)a0;
- (void)showAvatarsWithConfig:(id)a0;
- (void)hideAvatars;
- (void)exitSearchModeIfNeeded;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)layoutSubviews;

@end
