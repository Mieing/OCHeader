@class EmoticonSearchViewModel, NSString, UILongPressGestureRecognizer, UICollectionViewFlowLayout, KeyboardDismissProxy, MMUISearchBar, UIControl, CEmoticonWrap, EmoticonSearchInMessagePanelReporter, UICollectionView, NSIndexPath;
@protocol EmoticonSearchBoardViewDelegate;

@interface EmoticonSearchBoardView : MMUIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UISearchBarDelegate, UIScrollViewDelegate, UITextFieldDelegate, MMTipsViewControllerDelegate, EmoticonSearchCollectionComponentDelegate>

@property (retain, nonatomic) UICollectionViewFlowLayout *collectionLayout;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) CEmoticonWrap *currentEmoticonWrap;
@property (retain, nonatomic) UIControl *emoticonStoreView;
@property (nonatomic) long long configDelayHideKeyboardTime;
@property (retain, nonatomic) KeyboardDismissProxy *dismissKeyboardProxy;
@property (weak, nonatomic) id<EmoticonSearchBoardViewDelegate> delegate;
@property (retain, nonatomic) MMUISearchBar *searchBar;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) EmoticonSearchViewModel *vm;
@property (nonatomic) int vmState;
@property (nonatomic) BOOL disableWebSearch;
@property (retain, nonatomic) EmoticonSearchInMessagePanelReporter *reporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithText:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)configSearchBar;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateSearchBarAppearance;
- (void)configCollectionView;
- (void)reloadData;
- (void)hideKeyboard;
- (void)showKeyboard;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)delaySearch:(id)a0;
- (void)checkAndHideKeyboard;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (void)onLongPressToPreview:(id)a0;
- (void)onTapWebSearch;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)textFieldShouldClear:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidChangeSelection:(id)a0;
- (void)delayCheckKeyboard;
- (void)hideEmoticonStoreView;
- (void)showEmoticonStoreView;
- (void)onTapEmoticonStore;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)reportEmoticonExposure;
- (void).cxx_destruct;

@end
