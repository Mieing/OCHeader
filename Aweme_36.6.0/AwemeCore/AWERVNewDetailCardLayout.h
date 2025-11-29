@interface AWERVNewDetailCardLayout : NSObject

+ (struct CGSize { double x0; double x1; })sizeForHeadCardWithModel:(id)a0 width:(double)a1 isClickExpand:(BOOL)a2;
+ (struct CGSize { double x0; double x1; })sizeForNormalCardWithModel:(id)a0 width:(double)a1;
+ (double)videoHeightForHeadCardWithModel:(id)a0 width:(double)a1;
+ (double)videoBottomHeightWithModel:(id)a0 isExpand:(BOOL)a1 cardStyle:(long long)a2;
+ (double)videoHeightForNormalCardWithModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeForCardType:(unsigned long long)a0 awemeModel:(id)a1 width:(double)a2 isClickExpand:(BOOL)a3;
+ (double)videoHeightForNormalCardWithModel:(id)a0;
+ (double)videoHeightForHeadCardWithModel:(id)a0;

@end
