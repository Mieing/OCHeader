@interface WCFinderColumnCollectionCellFactory : NSObject

+ (id)getColumnCollectionViewCellWithVM:(id)a0 indexPath:(id)a1 collectionView:(id)a2;
+ (void)registeColumnCellForCollectionView:(id)a0;
+ (double)defaultCellHeightWithWidth:(double)a0;
+ (double)defaultCellHeightWithoutPlayer;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playerFrameOfContentVM:(id)a0 cellWidth:(double)a1;
+ (id)likeInfoParams;

@end
