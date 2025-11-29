@interface ContactTableUtil : NSObject

+ (id)genContactTableSectionHeaderView:(double)a0 title:(id)a1 image:(id)a2;
+ (id)genContactTableSectionHeaderView:(double)a0 title:(id)a1 image:(id)a2 colorProxy:(id)a3;
+ (id)genContactTableSectionHeaderView:(double)a0 title:(id)a1 secondTitle:(id)a2;
+ (id)genContactTableMoreView:(double)a0 description:(id)a1 rightImage:(id)a2;
+ (id)genContactTableMoreViewLabelStye:(double)a0 description:(id)a1 rightImage:(id)a2;
+ (id)genTokenPickNoResultViewForKeyword:(id)a0 width:(double)a1 height:(double)a2;
+ (id)getWCOutsiderCellTitle:(unsigned int)a0;
+ (id)getWCAddBlacklistCellTitle:(unsigned int)a0;
+ (id)getNewWCOutsiderCellTitle:(unsigned int)a0;
+ (id)getNewWCAddBlacklistCellTitle:(unsigned int)a0;
+ (id)getOpenIMWCAddBlacklistCellTitle:(unsigned int)a0;
+ (id)getSeperateLineViewWithWidth:(double)a0 andContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
