@interface RxCollectionLayoutDimension : NSObject <NSCopying>

@property (nonatomic) double dimension;
@property (nonatomic) unsigned long long semantic;
@property (readonly, nonatomic) BOOL isFractionalWidth;
@property (readonly, nonatomic) BOOL isFractionalHeight;
@property (readonly, nonatomic) BOOL isAbsolute;
@property (readonly, nonatomic) BOOL isEstimated;

+ (id)dimensionWithDimension:(double)a0 semantic:(unsigned long long)a1;
+ (id)fractionalWidthDimension:(double)a0;
+ (id)fractionalHeightDimension:(double)a0;
+ (id)absoluteDimension:(double)a0;
+ (id)estimatedDimension:(double)a0;

- (id)initWithDimension:(double)a0 semantic:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
