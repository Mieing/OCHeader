@interface AFDAspectRatioLimit : NSObject

@property (nonatomic) double minH;
@property (nonatomic) double minW;
@property (nonatomic) double maxH;
@property (nonatomic) double maxW;

- (id)initWithMinH:(double)a0 minW:(double)a1 maxH:(double)a2 maxW:(double)a3;
- (struct CGSize { double x0; double x1; })qualifiedSizeWithInitialWHRatio:(double)a0 fixedAxis:(unsigned long long)a1 fixedAxisLength:(double)a2;
- (struct CGSize { double x0; double x1; })qualifiedSizeWithInitialSize:(struct CGSize { double x0; double x1; })a0 fixedAxis:(unsigned long long)a1;
- (id)description;

@end
