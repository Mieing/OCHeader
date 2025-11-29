@interface AWETheaterLayoutHelper : NSObject

+ (long long)getDynamicSectionColumnWith:(long long)a0;
+ (BOOL)enableAdapterPad;
+ (struct CGSize { double x0; double x1; })cellSizeForCellType:(unsigned long long)a0 breakPoint:(struct { long long x0; long long x1; })a1 containerSize:(struct CGSize { double x0; double x1; })a2;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsetForCellType:(unsigned long long)a0 breakPoint:(struct { long long x0; long long x1; })a1;
+ (double)cellSpaceForCellType:(unsigned long long)a0 breakPoint:(struct { long long x0; long long x1; })a1;
+ (id)defaultHorizontalGridParamsMap;

@end
