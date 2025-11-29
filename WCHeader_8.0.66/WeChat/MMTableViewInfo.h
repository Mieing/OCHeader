@interface MMTableViewInfo : WCTableViewManager

+ (double)labelHeight:(id)a0 maxWidth:(double)a1 font:(id)a2;
+ (id)genSectionFootView:(id)a0;
+ (id)genSectionFootView:(id)a0 andTitltContenInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 andTableViewWidth:(double)a2;
+ (id)genSectionFootView:(id)a0 andTitltContenInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 andTableViewWidth:(double)a2 attributedText:(id)a3;
+ (id)genSectionHeadView:(id)a0;
+ (id)genSectionHeadView:(id)a0 andTitltContenInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 andTableViewWidth:(double)a2;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
