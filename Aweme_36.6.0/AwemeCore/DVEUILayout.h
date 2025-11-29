@interface DVEUILayout : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } position;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) unsigned long long alignment;
@property (nonatomic) long long sizeNumber;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) BOOL enable;

+ (long long)dve_styleWithName:(id)a0;
+ (BOOL)dve_enableWithName:(id)a0;
+ (double)dve_sizeNumberWithName:(id)a0;
+ (struct CGSize { double x0; double x1; })dve_sizeWithName:(id)a0;
+ (struct CGPoint { double x0; double x1; })dve_positionWithName:(id)a0;
+ (unsigned long long)dve_alignmentWithName:(id)a0;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })dve_edgeInsetsWithName:(id)a0;
+ (id)dve_sizeWithName:(id)a0 position:(id)a1 alignment:(id)a2 edgeInsets:(id)a3;

@end
