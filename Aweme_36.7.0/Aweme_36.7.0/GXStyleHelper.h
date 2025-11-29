@interface GXStyleHelper : NSObject

+ (struct { int x0; float x1; })convertValue:(id)a0;
+ (long long)convertJustifyContent:(id)a0;
+ (struct { int x0; float x1; })convertAutoValue:(id)a0;
+ (double)converSimpletValue:(id)a0;
+ (void)configStyleModel:(id)a0 style:(id)a1;
+ (struct { struct { int x0; float x1; } x0; struct { int x0; float x1; } x1; struct { int x0; float x1; } x2; struct { int x0; float x1; } x3; })convertMargin:(id)a0;
+ (struct { struct { int x0; float x1; } x0; struct { int x0; float x1; } x1; struct { int x0; float x1; } x2; struct { int x0; float x1; } x3; })convertPadding:(id)a0;
+ (struct { struct { int x0; float x1; } x0; struct { int x0; float x1; } x1; })convertMinSize:(id)a0;
+ (struct { struct { int x0; float x1; } x0; struct { int x0; float x1; } x1; })convertMaxSize:(id)a0;
+ (long long)convertPositionType:(id)a0;
+ (struct { struct { int x0; float x1; } x0; struct { int x0; float x1; } x1; struct { int x0; float x1; } x2; struct { int x0; float x1; } x3; })convertPosition:(id)a0;
+ (long long)convertDirection:(id)a0;
+ (long long)convertFlexDirection:(id)a0;
+ (long long)convertDisplay:(id)a0;
+ (long long)convertAlignItems:(id)a0;
+ (long long)convertAlignSelf:(id)a0;
+ (long long)convertFlexWrap:(id)a0;
+ (long long)convertAlignContent:(id)a0;
+ (struct { struct { int x0; float x1; } x0; struct { int x0; float x1; } x1; })convertSize:(id)a0;

@end
