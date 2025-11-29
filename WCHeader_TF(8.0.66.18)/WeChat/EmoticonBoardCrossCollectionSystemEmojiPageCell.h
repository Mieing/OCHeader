@class UILongPressGestureRecognizer, NSString, NSMutableSet, UIView, UIButton;
@protocol EmoticonBoardCrossCollectionEmojiPageDelegate;

@interface EmoticonBoardCrossCollectionSystemEmojiPageCell : EmoticonBoardCrossCollectionBasePageCell <UICollectionViewDataSource> {
    NSMutableSet *_emojiHiddenSet;
}

@property (retain, nonatomic) UIView *buttonBackgroundView;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (weak, nonatomic) id<EmoticonBoardCrossCollectionEmojiPageDelegate> delegate;
@property (nonatomic) double bottomInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configCollectionViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configButtons;
- (void)configGestureRecognizer;
- (void)refreshView;
- (void)setSectionInfo:(id)a0;
- (void)setDarkMode:(BOOL)a0;
- (void)updateButtonColor;
- (void)updateQQEmojiHiddenAnimated:(BOOL)a0;
- (double)getAlphaForQQEmojiCellAtIndexPath:(id)a0 andConvertedButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setQQEmojiAlpha:(double)a0 forCellAtIndexPath:(id)a1;
- (id)setForIndexPathsIntersectWithButtons;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertedButtonBackgroundViewFrameForIntersectionTest;
- (void)onTapDeleteButton;
- (void)onLongPressToPreview:(id)a0;
- (unsigned long long)maximumNumberOfItemsInRow;
- (double)getButtonBottomPadding;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
