@class NSMutableArray;

@interface IESECListKitBaseFlowLayout : UICollectionViewFlowLayout

@property (readonly, nonatomic) NSMutableArray *ieseclistkit_deletedIndexPaths;
@property (readonly, nonatomic) NSMutableArray *ieseclistkit_insertedIndexPaths;

- (void)setIeseclistkit_deletedIndexPaths:(id)a0;
- (void)setIeseclistkit_insertedIndexPaths:(id)a0;
- (id)ieseclistkit_decorationAttributes;
- (void)setIeseclistkit_decorationAttributes:(id)a0;
- (void)ieseclistkit_prepareForCollectionViewUpdates:(id)a0;
- (void)ieseclistkit_finalizeCollectionViewUpdates;
- (void)ieseclistkit_registerDecorationView;
- (void)ieseclistkit_prepareDecorationAttributes;
- (void)ieseclistkit_addDecorationAttributesAtSection:(long long)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 backgroundColor:(id)a2;
- (id)ieseclistkit_layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)ieseclistkit_layoutAttributesForDecorationViewsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)ieseclistkit_indexPathsToInsertForDecorationViewOfKind:(id)a0;
- (id)ieseclistkit_indexPathsToDeleteForDecorationViewOfKind:(id)a0;
- (BOOL)ieseclistkit_isInsertedIndexPath:(id)a0;
- (BOOL)ieseclistkit_isDeletedIndexPath:(id)a0;

@end
