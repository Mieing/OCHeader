@class AWEVideoCoverEditorTextStyleCategoryModel, NSString, UICollectionView, UIView, UIButton;

@interface AWEVideoCoverEditorTextStyleCategoryView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) AWEVideoCoverEditorTextStyleCategoryModel *model;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) UIButton *textStyleButton;
@property (retain, nonatomic) UIButton *alignmentButton;
@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) UICollectionView *listView;
@property (copy, nonatomic) id /* block */ didSelectedBlk;
@property (copy, nonatomic) id /* block */ shouldResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allTextStyles;

- (void)configWithModel:(id)a0;
- (void)updateWithItemModel:(id)a0;
- (void)clearPanel;
- (void)didClickTextStyleButton:(id)a0;
- (void)didClickAlignmentButton:(id)a0;
- (long long)nextStyleIndex:(long long)a0;
- (long long)nextAlignmentIndex:(long long)a0;
- (void)reloadData;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setupUI;

@end
