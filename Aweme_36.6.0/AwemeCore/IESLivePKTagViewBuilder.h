@interface IESLivePKTagViewBuilder : NSObject

+ (id)buildTagContainerViewWithTags:(id)a0 config:(id)a1 tagSizes:(id)a2 adjacentElementWidth:(double)a3 adjacentElementLimitWidth:(double)a4 containerlimitWidth:(double)a5 adjacentElementActualWidth:(double *)a6 shownTags:(id)a7;
+ (struct CGSize { double x0; double x1; })tagContentSize4Text:(id)a0 font:(id)a1;
+ (id)buildTagContainerViewWithTags:(id)a0 config:(id)a1 adjacentElementWidth:(double)a2 adjacentElementLimitWidth:(double)a3 containerlimitWidth:(double)a4 adjacentElementActualWidth:(double *)a5;
+ (id)buildTagContainerViewWithTags:(id)a0 config:(id)a1 tagSizes:(id)a2 adjacentElementWidth:(double)a3 adjacentElementLimitWidth:(double)a4 containerlimitWidth:(double)a5 adjacentElementActualWidth:(double *)a6 shownTags:(id)a7 userDarkStyle:(BOOL)a8;
+ (id)p_makeTagViewWithTagInfo:(id)a0 config:(id)a1 userDarkStyle:(BOOL)a2;

@end
