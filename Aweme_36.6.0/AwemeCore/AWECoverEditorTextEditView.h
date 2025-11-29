@class UITextView, ACCTextStickerEditInputHandler, UICollectionView, NSArray, UILabel, NSString, UIButton;
@protocol AWECoverEditorTextEditViewDelegate;

@interface AWECoverEditorTextEditView : UIView <UITextViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UITextView *textEditView;
@property (retain, nonatomic) UILabel *placeHolderLabel;
@property (retain, nonatomic) UILabel *textLengthLabel;
@property (retain, nonatomic) UIButton *completeBtn;
@property (retain, nonatomic) UICollectionView *titleCollectionView;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) double currentFontSize;
@property (retain, nonatomic) ACCTextStickerEditInputHandler *inputHelper;
@property (retain, nonatomic) NSArray *titleModelArr;
@property (weak, nonatomic) id<AWECoverEditorTextEditViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getContent;
- (long long)textCount:(id)a0;
- (BOOL)enableTextRefactor;
- (id)safeSubstring:(id)a0 maxLength:(long long)a1;
- (void)handleKeyboardChangeFrameNoti:(id)a0;
- (void)handleKeyboardWillHideNoti:(id)a0;
- (long long)minIndexPath:(id)a0;
- (long long)maxIndexPath:(id)a0;
- (void)reloadTitleData;
- (void)setContentWithText:(id)a0;
- (void)beginTextEdit;
- (void)completeBtnClicked;
- (void)updateTextLength;
- (void)adjustTextEditViewFontSizeWithContent:(id)a0;
- (void)updateForKeyboard:(id)a0 completion:(id /* block */)a1;
- (void)p_updateFrameWithKeyBoardHide:(BOOL)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)selectionDidChange:(id)a0;
- (void)selectionWillChange:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)textWillChange:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)setupUI;
- (void)addObservers;

@end
