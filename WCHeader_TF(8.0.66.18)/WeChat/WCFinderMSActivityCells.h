@interface WCFinderMSActivityCells : NSObject

+ (id)supportCellClasses;
+ (id)makeCellIdentifiers:(id)a0;
+ (void)registerCellClassForTableView:(id)a0 reuseQueue:(id)a1;
+ (unsigned long long)calculateCommentIndexForContentVM:(id)a0 cellIdentifier:(id)a1;
+ (struct CGSize { double x0; double x1; })calculateSizeForContentVM:(id)a0 cellIdentifier:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
+ (id)wrapItemIdentifier:(id)a0 tid:(id)a1;
+ (id)wrapItemIdentifier:(id)a0 commentId:(id)a1 tid:(id)a2;
+ (id)getItemIdentifier:(id)a0;

@end
