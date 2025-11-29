@class UIColor, ZZFLEXViewModel, UICollectionViewLayoutAttributes, NSMutableArray;

@interface ZZFLEXSectionModel : NSObject

@property (nonatomic) long long sectionTag;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) ZZFLEXViewModel *headerViewModel;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } headerViewSize;
@property (retain, nonatomic) ZZFLEXViewModel *footerViewModel;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } footerViewSize;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInsets;
@property (readonly, nonatomic) NSMutableArray *itemsArray;
@property (readonly, nonatomic) unsigned long long count;
@property (nonatomic) long long fslColumnCount;
@property (nonatomic) struct CGSize { double width; double height; } fslCellSpace;
@property (nonatomic) double fslDecorationHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } fslHeaderEdgeInset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } fslFooterEdgeInset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } fslDecorationEdgeInset;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *fslDecorationLayoutAttributes;

- (id)init;
- (void)addObject:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)insertObjects:(id)a0 atIndexes:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)removeObject:(id)a0;
- (id)dataModelAtIndex:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;

@end
