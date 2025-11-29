@class MMBGMSelectedConfig, NSString, WCSearchBar, MMBGMPanelPublishContext, MMUIButton, MMBGMSearchResultContainerView;
@protocol MMBGMSelectedSearchViewDelegate;

@interface MMBGMSelectedSearchView : MMUIView <UITextFieldDelegate, MMBGMSearchResultContainerViewDelegate>

@property (retain, nonatomic) WCSearchBar *searchBar;
@property (retain, nonatomic) MMUIButton *cancelButton;
@property (retain, nonatomic) MMBGMSearchResultContainerView *searchResultContainerView;
@property (retain, nonatomic) MMBGMSelectedConfig *config;
@property (weak, nonatomic) id<MMBGMSelectedSearchViewDelegate> delegate;
@property (retain, nonatomic) MMBGMPanelPublishContext *publishContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)setup;
- (void)setupDataReport;
- (id)genReportDict;
- (void)willShow;
- (void)willDismiss;
- (void)reset;
- (void)reload;
- (void)setSearchViewDidShowUp;
- (void)setSearchViewDidCloseDown;
- (void)setKeyBoardShow:(BOOL)a0;
- (void)unSelectedAllItem;
- (void)autoSetSelectedCellPlayingState;
- (void)autoStopSelectedCellPlayingState;
- (void)selectFirstMusicIfNeeded;
- (void)selectMusicAtIndex:(unsigned long long)a0;
- (id)musicDataAtIndex:(unsigned long long)a0;
- (id)currentSelectedmusicData;
- (void)setupView;
- (void)onClickCancelSearch;
- (void)onTextFieldChanged:(id)a0;
- (void)reportSearchEvent;
- (void)reportSearchBarClickEvent;
- (void)textFieldDidChangeSelection:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)_startSearchMusicWithKey:(id)a0;
- (void)setHidden:(BOOL)a0;
- (id)bgmSearchResultContainerViewGetSearchWord:(id)a0;
- (void)onBgmSearchResultContainerView:(id)a0 didSelectedMusic:(id)a1 atIndex:(unsigned long long)a2 isTriggerByTap:(BOOL)a3;
- (void)onBgmSearchResultContainerView:(id)a0 didEditMusic:(id)a1 atIndex:(unsigned long long)a2;
- (void)onBgmSearchResultContainerView:(id)a0 didFavMusic:(id)a1 atIndex:(unsigned long long)a2;
- (void)onBgmSearchResultContainerView:(id)a0 didRemoveMusic:(id)a1 atIndex:(unsigned long long)a2;
- (id)onBgmSearchResultContainerView:(id)a0 willSelectMusic:(id)a1 indexPath:(id)a2;
- (void)onBgmSearchResultContainerView:(id)a0 willShowMusic:(id)a1 musicIndex:(unsigned long long)a2;
- (unsigned long long)bgmSearchResultContainerViewGetMaterialDuration:(id)a0;
- (void)onBgmSearchResultContainerView:(id)a0 didSearchWithKey:(id)a1;
- (void)onBgmSearchResultContainerViewWillBeginDragging:(id)a0;
- (BOOL)bgmSearchResultContainerViewIsShowingInView:(id)a0;
- (void)onSearchResultContainerViewWillStartPlayingVideo:(id)a0;
- (void)onSearchResultContainerViewWillStopPlayingVideo:(id)a0;
- (void).cxx_destruct;

@end
