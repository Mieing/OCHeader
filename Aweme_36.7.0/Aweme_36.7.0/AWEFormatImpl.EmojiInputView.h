@interface AWEFormatImpl.EmojiInputView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ spacing;
    void /* unknown type, empty encoding */ emojiSize;
}

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
