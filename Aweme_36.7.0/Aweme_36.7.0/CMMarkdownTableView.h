@class NSArray, UICollectionView, CMTableViewAttributes, CMMarkdownTableViewLayout, NSAttributedString, NSString;

@interface CMMarkdownTableView : UIView <UICollectionViewDataSource, CMMarkdownSubViewScrollable, CMMarkdownSubViewTextCopiable>

@property (retain, nonatomic) NSAttributedString *origin;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *tableInfo;
@property (retain, nonatomic) CMTableViewAttributes *attributes;
@property (retain, nonatomic) CMMarkdownTableViewLayout *markdownLayout;
@property (nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })preCalculate;
- (id)copyPureStr;
- (id)copyMarkdownStr;
- (id)initWithDataSource:(id)a0 originStr:(id)a1 attributes:(id)a2;
- (void)addLeftGradientLayer:(id)a0 rightLayer:(id)a1;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
