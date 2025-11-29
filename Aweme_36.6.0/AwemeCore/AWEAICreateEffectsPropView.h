@class NSString, UICollectionView, AWEAICreateEffectsCreateKeyWordsView, UILabel, ACCSideslipPropPickCollectionLayout, AWECollectionStickerPickerModel;

@interface AWEAICreateEffectsPropView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UILabel *paintStyleLabel;
@property (retain, nonatomic) ACCSideslipPropPickCollectionLayout *layout;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) long long selectIndex;
@property (copy, nonatomic) id /* block */ switchEffectBlock;
@property (retain, nonatomic) AWECollectionStickerPickerModel *model;
@property (nonatomic) BOOL needScrollToCurrentIndex;
@property (retain, nonatomic) AWEAICreateEffectsCreateKeyWordsView *addKeywordView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateAddKeywords;
- (void)p_firstLocateAnimation;
- (id)initWithStickers:(id)a0 currentSelectIndex:(long long)a1;
- (void)reloadData;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
