@class NSString, NSArray, AWEAICreateEffectsKeyWordsLayout, NSMutableDictionary, AWEAICreateEffectsPropView, NSMutableArray, UICollectionView, AWEAICreateKeyWordsViewController, AWEAICreateEffectsCreateKeyWordsView;

@interface AWEAICreateEffectsKeyWordsView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) AWEAICreateEffectsKeyWordsLayout *layout;
@property (retain, nonatomic) NSMutableDictionary *selectedKeyMap;
@property (retain, nonatomic) NSArray *serverKeyWordsList;
@property (retain, nonatomic) NSMutableArray *customKeyWordsList;
@property (retain, nonatomic) AWEAICreateEffectsCreateKeyWordsView *addKeywordView;
@property (retain, nonatomic) AWEAICreateKeyWordsViewController *addKeywordsVC;
@property (nonatomic) BOOL outMaxCustomKeywords;
@property (nonatomic) double headerHeight;
@property (nonatomic) long long enterPageFrom;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) id /* block */ selectKeywordBlock;
@property (copy, nonatomic) id /* block */ clickAddKeyword;
@property (retain, nonatomic) AWEAICreateEffectsPropView *propView;
@property (retain, nonatomic) NSMutableArray *selectedList;
@property (nonatomic) BOOL forceDarkStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEnterFrom:(long long)a0;
- (id)getCurrentIndexShowString;
- (BOOL)cancelSelectKeyWordWithIndex:(unsigned long long)a0 keyword:(id)a1;
- (void)updateViewWithData:(id)a0 selectedKeyWords:(id)a1;
- (void)updateAddKeywordsStatus:(BOOL)a0;
- (id)keywordsConvertToModels:(id)a0 cellStatus:(unsigned long long)a1;
- (BOOL)checkHasSelectedCustomKeywords;
- (long long)serverKeyWordsListSelectedModels;
- (id)getCurrentModelAtIndex:(long long)a0;
- (void)handleClickAddKeyword;
- (id)getSortedCellArray;
- (struct CGSize { double x0; double x1; })loraCustomKeyWordCellSize:(id)a0;
- (struct CGSize { double x0; double x1; })p_titleLabelSizeWithTitle:(id)a0;
- (void)handleCallBackKeywords:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)dealloc;
- (void)setupSubviews;

@end
