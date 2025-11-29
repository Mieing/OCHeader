@class NSString, NSArray, NSMutableDictionary, __RxDataSourceSnapshotter, NSMutableArray, UICollectionView, NSMutableIndexSet, NSIndexPath;

@interface RxCollectionViewUpdate : NSObject <RxCollectionViewUpdateTranslating> {
    UICollectionView *_collectionView;
    NSArray *_updateItems;
    __RxDataSourceSnapshotter *_oldModel;
    __RxDataSourceSnapshotter *_newModel;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _oldVisibleBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _newVisibleBounds;
    NSMutableIndexSet *_movedItems;
    NSMutableIndexSet *_movedSections;
    NSMutableIndexSet *_deletedSections;
    NSMutableIndexSet *_insertedSections;
    long long *_oldSectionMap;
    long long *_newSectionMap;
    long long *_oldGlobalItemMap;
    long long *_newGlobalItemMap;
    NSMutableArray *_deletedSupplementaryIndexesSectionArray;
    NSMutableArray *_insertedSupplementaryIndexesSectionArray;
    NSMutableDictionary *_deletedSupplementaryTopLevelIndexesDict;
    NSMutableDictionary *_insertedSupplementaryTopLevelIndexesDict;
    id *_animatedItems;
    id *_animatedHeaders;
    id *_animatedFooters;
    NSMutableArray *_viewAnimations;
    NSIndexPath *_oldFocusedIndexPath;
    NSIndexPath *_newFocusedIndexPath;
    long long _oldFocusedViewType;
    long long _newFocusedViewType;
    RxCollectionViewUpdate *_apple;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCollectionView:(id)a0 updateItems:(id)a1 oldModel:(id)a2 newModel:(id)a3 oldVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 newVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;
- (void)__computeSectionUpdates;
- (void)__computeItemUpdates;
- (void).cxx_destruct;
- (long long)finalSectionCount;
- (id)finalIndexPathForInitialIndexPath:(id)a0;
- (long long)initialSectionIndexForFinalSectionIndex:(long long)a0;
- (void)dealloc;
- (long long)finalSectionIndexForInitialSectionIndex:(long long)a0;

@end
