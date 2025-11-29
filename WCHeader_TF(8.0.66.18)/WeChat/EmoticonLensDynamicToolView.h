@class EmoticonCameraDynamiFlowLayout, UICollectionView, NSString, NSArray, NSMutableArray, UIView;
@protocol EmoticonLensDynamicToolViewDelegate;

@interface EmoticonLensDynamicToolView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, EmoticonCameraDynamiFlowLayoutDelegate> {
    UIView *m_selectedMaterialBox;
    NSMutableArray *m_emoticonLensList;
    unsigned long long m_scenes;
}

@property (retain, nonatomic) UICollectionView *dynamicCollectionView;
@property (retain, nonatomic) EmoticonCameraDynamiFlowLayout *dynamicLayout;
@property (retain, nonatomic) NSMutableArray *extraLensList;
@property (nonatomic) unsigned long long selectedEmoticonLensIndex;
@property (weak, nonatomic) id<EmoticonLensDynamicToolViewDelegate> delegate;
@property (copy, nonatomic) NSString *selectedEmoticonLensId;
@property (readonly, nonatomic) NSArray *visiableLens;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andScenes:(unsigned int)a1;
- (void)reloadLensList;
- (void)setHidden:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)p_selectItemAtIndexPath:(id)a0;
- (void)p_selectItemWithEmoticonLensItem:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)selectEmoticonLensWithId:(id)a0;
- (void)scrollToEmoticonLensWithId:(id)a0;
- (void)selectEmoticonLensAtIndex:(unsigned long long)a0;
- (void)appendEmoticonLens:(id)a0;
- (BOOL)isLastIndex:(id)a0;
- (void)trySelectLensWithLensId:(id)a0 shouldCallDelegate:(BOOL)a1;
- (void)reloadDataAndExposure;
- (void)motionTmplSelectedItemAtIndexPath:(id)a0;
- (void).cxx_destruct;

@end
