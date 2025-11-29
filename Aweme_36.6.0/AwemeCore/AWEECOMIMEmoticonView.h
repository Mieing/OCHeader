@class AWEECOMIMEmoticonTabView, NSArray, AWEECOMIMEmojiView, UICollectionView, UIView, NSString;

@interface AWEECOMIMEmoticonView : UIView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIScrollViewDelegate>

@property (retain, nonatomic) AWEECOMIMEmoticonTabView *tabView;
@property (retain, nonatomic) AWEECOMIMEmojiView *emojiView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *tabDataArr;
@property (copy, nonatomic) id /* block */ selectedEmoji;
@property (copy, nonatomic) id /* block */ deleteEmoji;
@property (copy, nonatomic) id /* block */ sendEmoji;
@property (copy, nonatomic) id /* block */ sendEmoticonPackage;
@property (weak, nonatomic) UIView *inputSuperView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setupUI;

@end
