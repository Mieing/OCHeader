@class UIView, NSString, NSArray, AWEIMShareInputViewController, AWEIMCommentShareUserHorizontalSectionViewModel, NSMutableSet, UICollectionView, UIViewController, UILabel;

@interface AWEIMCommentShareUserHorizontalCollectionViewCell : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegate, AWEIMTranspondListCellActionDelegate, AWEIMTranspondListMoreCellActionDelegate>

@property (retain, nonatomic) UICollectionView *horizontalCollectionView;
@property (retain, nonatomic) AWEIMCommentShareUserHorizontalSectionViewModel *cellModel;
@property (copy, nonatomic) NSArray *dataList;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSMutableSet *trackChatShowSet;
@property (retain, nonatomic) NSMutableSet *trackRecentlyChatShowSet;
@property (retain, nonatomic) AWEIMShareInputViewController *shareInputVC;
@property (copy, nonatomic) NSArray *currentSelectedContacts;
@property (retain, nonatomic) UIView *inputMaskView;
@property (nonatomic) long long currentSelectNum;
@property (nonatomic) double normalSheetHeight;
@property (retain, nonatomic) UILabel *shareLabel;
@property (weak, nonatomic) UIViewController *longPressViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)p_hideKeyboard;
- (void)handleKeyboardShowNoti:(id)a0;
- (void)handleKeyboardHideNoti:(id)a0;
- (void)p_getViewModelActiveState;
- (void)recoverSelectContacts;
- (BOOL)p_shouldAdpatBigFontMode;
- (double)p_shareInputVCHeight;
- (void)handleBeginInputWithType:(unsigned long long)a0 keyboardHeight:(double)a1 animated:(BOOL)a2;
- (void)handleMultiSelectWithCell:(id)a0 itemModel:(id)a1;
- (void)tapInputMaskView;
- (void)p_transferToShareList;
- (void)p_closeCommentLongPressMenu:(id /* block */)a0;
- (void)setupShareTextViewWithItemModel;
- (void)removeShareTextView;
- (void)createGroupShare:(id)a0;
- (void)shareToUser;
- (void)p_addShareEmoticonModelIfNeeded;
- (id)plainShareText;
- (BOOL)transpondListCellDelegateDidTapAvatar:(id)a0 itemModel:(id)a1;
- (BOOL)transpondListCellDelegateDidLongpressAvatar:(id)a0 shareModel:(id)a1 gesRecognizer:(id)a2;
- (void)moreCellTapped;
- (void)updateCCellWithModel:(id)a0;
- (void)p_acquireUserActiveWithCompletion:(id /* block */)a0;
- (void)trackShowSendShareTextWithItemModel:(id)a0;
- (void)trackClickSendShareTextWithItemModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)p_addObservers;

@end
