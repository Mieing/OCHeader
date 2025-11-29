@class NSArray, UICollectionView, NSString, AWERVDetailPageContext;
@protocol AWERVLVSelectDelegate, AWERVLVLanguageViewDelegate;

@interface AWERVLVLanguageView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSArray *languageModelList;
@property (weak, nonatomic) id<AWERVLVSelectDelegate> delegate;
@property (weak, nonatomic) id<AWERVLVLanguageViewDelegate> trackDelegate;
@property (weak, nonatomic) AWERVDetailPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithModel:(id)a0 currentSelectIndex:(long long)a1;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
