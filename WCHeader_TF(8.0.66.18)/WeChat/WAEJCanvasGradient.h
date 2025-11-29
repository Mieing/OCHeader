@class NSMutableArray, WAEJTexture;

@interface WAEJCanvasGradient : NSObject <EJFillable> {
    WAEJTexture *texture;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) WAEJTexture *texture;
@property (readonly, nonatomic) struct { float x; float y; } p1;
@property (readonly, nonatomic) struct { float x; float y; } p2;
@property (readonly, nonatomic) float r1;
@property (readonly, nonatomic) float r2;
@property (readonly, nonatomic) NSMutableArray *colorStops;

- (id)initLinearGradientWithP1:(struct { float x0; float x1; })a0 p2:(struct { float x0; float x1; })a1;
- (id)initRadialGradientWithP1:(struct { float x0; float x1; })a0 r1:(float)a1 p2:(struct { float x0; float x1; })a2 r2:(float)a3;
- (void)dealloc;
- (void)addStopWithColor:(union { struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } x0; unsigned char x1[4]; unsigned int x2; })a0 at:(float)a1;
- (void)addStopWithRawColor:(union { struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } x0; unsigned char x1[4]; unsigned int x2; })a0 at:(float)a1;
- (void)rebuild;
- (id)getPixelsWithWidth:(int)a0 forSortedStops:(id)a1;

@end
