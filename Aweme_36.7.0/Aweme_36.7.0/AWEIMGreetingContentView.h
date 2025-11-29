@class NSArray, UICollectionView, NSString, UILabel, UIView, UIButton;

@interface AWEIMGreetingContentView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (nonatomic) long long showedIndex;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *greetingLabel;
@property (retain, nonatomic) UIView *separatorLineView;
@property (copy, nonatomic) NSArray *stickers;
@property (copy, nonatomic) id /* block */ closeButtonClickAction;
@property (copy, nonatomic) id /* block */ sendSelectEmojiWithGreetingEmoticonBlock;
@property (copy, nonatomic) id /* block */ willDisplayEmojiWithGreetingEmoticonBlock;
@property (nonatomic) BOOL needCalculateShowedIndex;
@property (nonatomic) double separatorLineViewTopOffsetOfParentView;
@property (nonatomic) struct CGSize { double width; double height; } closeButtonSize;
@property (nonatomic) double closeButtonTrailingOffsetOfParentView;
@property (nonatomic) double collectionViewHeight;
@property (nonatomic) double collectionViewTopOffsetOfGreetingLabel;
@property (nonatomic) struct CGSize { double width; double height; } collectionViewItemSize;
@property (nonatomic) double greetingLabelHeight;
@property (nonatomic) double greetingLabelTopOffsetOfParentView;
@property (nonatomic) double greetingLabelLeadingOffsetOfParentView;
@property (nonatomic) double greetingLabelTrailingOffsetOfParentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeButtonClicked:(id)a0;
- (void)stopAnimationIfNeed;
- (void)p_updateShowedIndex:(id)a0;
- (id)p_getCurrentTimeFilterTag;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)refreshUI;

@end
