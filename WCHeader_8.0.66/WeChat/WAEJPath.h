@interface WAEJPath : NSObject <NSCopying> {
    struct { float x; float y; } currentPos;
    struct { float x; float y; } lastPushed;
    struct { float x; float y; } minPos;
    struct { float x; float y; } maxPos;
    unsigned int longestSubpath;
    float distanceTolerance;
    struct { struct vector<EJVector2, std::allocator<EJVector2>> { struct *__begin_; struct *__end_; struct __compressed_pair<EJVector2 *, std::allocator<EJVector2>> { struct *__value_; } __end_cap_; } points; BOOL isClosed; } currentPath;
    struct vector<subpath_t, std::allocator<subpath_t>> { struct *__begin_; struct *__end_; struct __compressed_pair<subpath_t *, std::allocator<subpath_t>> { struct *__value_; } __end_cap_; } paths;
}

@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (readonly) int fillRule;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)push:(struct { float x0; float x1; })a0;
- (void)reset;
- (void)close;
- (void)endSubPath;
- (void)moveToX:(float)a0 y:(float)a1;
- (void)lineToX:(float)a0 y:(float)a1;
- (void)bezierCurveToCpx1:(float)a0 cpy1:(float)a1 cpx2:(float)a2 cpy2:(float)a3 x:(float)a4 y:(float)a5 scale:(float)a6;
- (void)recursiveBezierX1:(float)a0 y1:(float)a1 x2:(float)a2 y2:(float)a3 x3:(float)a4 y3:(float)a5 x4:(float)a6 y4:(float)a7 level:(int)a8;
- (void)quadraticCurveToCpx:(float)a0 cpy:(float)a1 x:(float)a2 y:(float)a3 scale:(float)a4;
- (void)recursiveQuadraticX1:(float)a0 y1:(float)a1 x2:(float)a2 y2:(float)a3 x3:(float)a4 y3:(float)a5 level:(int)a6;
- (void)arcToX1:(float)a0 y1:(float)a1 x2:(float)a2 y2:(float)a3 radius:(float)a4;
- (void)arcX:(float)a0 y:(float)a1 radius:(float)a2 startAngle:(float)a3 endAngle:(float)a4 antiClockwise:(BOOL)a5;
- (void)drawPolygonsToContext:(id)a0 fillRule:(int)a1 target:(int)a2;
- (void)drawArcToContext:(id)a0 atPoint:(struct { float x0; float x1; })a1 v1:(struct { float x0; float x1; })a2 v2:(struct { float x0; float x1; })a3 color:(union { struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } x0; unsigned char x1[4]; unsigned int x2; })a4;
- (void)drawLinesToContext:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
