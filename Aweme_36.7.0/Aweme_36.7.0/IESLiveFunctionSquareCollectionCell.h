@interface IESLiveFunctionSquareCollectionCell : UICollectionViewCell

+ (double)minimumInteritemSpacing:(id)a0 dataCount:(unsigned long long)a1;
+ (double)minimumLineSpacing:(id)a0 dataCount:(unsigned long long)a1;
+ (id)reuseIdentifier;
+ (struct CGSize { double x0; double x1; })cellSize;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsets;

- (void)updateWithRowNode:(id)a0;

@end
