@class AWEDCFeedPageContext, NSString, AWEDCFeedBaseCell, AWEDCFeedSearchSuggestWordView, UIView, AWEWordSourceModel, AWEAwemeModel;

@interface AWEDCFeedBaseCellElement : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWEDCFeedCellElementProtocol>

@property (readonly, nonatomic) AWEDCFeedSearchSuggestWordView *searchSuggestWordView;
@property (retain, nonatomic) AWEWordSourceModel *currentWordSourceModel;
@property (copy, nonatomic) id /* block */ closeCallBack;
@property (copy, nonatomic) id /* block */ clickCallBack;
@property (copy, nonatomic) id /* block */ showCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *elementView;
@property (nonatomic) double elementWidth;
@property (nonatomic) double elementHeight;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) AWEDCFeedPageContext *context;
@property (weak, nonatomic) AWEDCFeedBaseCell *containerCell;
@property (readonly, nonatomic) BOOL hasAddedToContainer;
@property (nonatomic) BOOL screenWillRotate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowWithAwemeModel:(id)a0 context:(id)a1;
+ (double)heightWithCellWidth:(double)a0 awemeModel:(id)a1 context:(id)a2;
+ (double)lastBottomMargin;
+ (long long)elementStyle;
+ (double)bottomMargin;

- (void)configWithModel:(id)a0 context:(id)a1;
- (void)themeDidChange:(long long)a0;
- (void)configWithModel:(id)a0 context:(id)a1 cellWidth:(double)a2;
- (void)updateElementLayoutWithCellWidth:(double)a0 height:(double)a1 context:(id)a2;
- (void)updateSearchSuggestWordView;
- (void)hideSuggestWordsView;
- (void)addSuggestWordsView:(id)a0;
- (void)removeSuggestWordsView;
- (void)showSuggestWordsView;
- (long long)wordCount;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithContext:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)reset;

@end
