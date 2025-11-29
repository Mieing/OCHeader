@class RxCollectionLayoutDimension;

@interface RxCollectionLayoutSize : NSObject <NSCopying>

@property (retain, nonatomic) RxCollectionLayoutDimension *widthDimension;
@property (retain, nonatomic) RxCollectionLayoutDimension *heightDimension;
@property (nonatomic) unsigned long long widthSemantic;
@property (nonatomic) unsigned long long heightSemantic;
@property (nonatomic) struct CGSize { double width; double height; } size;

+ (id)sizeWithWidthDimension:(id)a0 heightDimension:(id)a1;
+ (id)sizeWithSize:(struct CGSize { double x0; double x1; })a0 widthSemantic:(unsigned long long)a1 heightSemantic:(unsigned long long)a2;
+ (id)sizeWithContainerSize;
+ (id)sizeWithAbsoluteSize:(struct CGSize { double x0; double x1; })a0;
+ (id)sizeWithContainerWidthFactor:(double)a0 containerHeightFactor:(double)a1;
+ (id)sizeWithWidth:(double)a0 widthSemantic:(unsigned long long)a1 height:(double)a2 heightSemantic:(unsigned long long)a3;

- (struct CGSize { double x0; double x1; })effectiveSizeForContainer:(id)a0 ignoringInsets:(BOOL)a1;
- (BOOL)isEstimatedForAxis:(int)a0;
- (struct CGSize { double x0; double x1; })effectiveSizeForContainer:(id)a0;
- (id)widthSemanticDescription;
- (id)heightSemanticDescription;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEstimated;
- (BOOL)isContainerSize;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 widthSemantic:(unsigned long long)a1 heightSemantic:(unsigned long long)a2 width:(id)a3 height:(id)a4;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
