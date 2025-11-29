@class NSArray, UIView;

@interface MMMenuItemData : NSObject

@property (retain, nonatomic) NSArray *itemRows;
@property (nonatomic) struct CGSize { double width; double height; } menuSize;
@property (nonatomic) double screenWidth;
@property (nonatomic) long long maxCountPerLine;
@property (nonatomic) double minWidth;
@property (nonatomic) double menuItemInnerGap;
@property (nonatomic) double menuItemWidth;
@property (nonatomic) long long arrowPosition;
@property (nonatomic) struct CGPoint { double x; double y; } menuOrigin;
@property (nonatomic) double arrowCenterX;
@property (nonatomic) long long menuStyle;
@property (weak, nonatomic) UIView *customHeaderView;

- (id)initWithItemRows:(id)a0 screenWidth:(double)a1 maxCountPerLine:(long long)a2 menuStyle:(long long)a3 customHeaderView:(id)a4 minWidth:(double)a5 menuItemInnerGap:(double)a6 menuItemWidth:(double)a7;
- (long long)rowCount;
- (id)itemsAtRow:(long long)a0;
- (long long)menuItemCount;
- (double)caculateMenuItemWidth;
- (BOOL)isPlainTextMenu;
- (void)calculateMenuLayout;
- (struct CGSize { double x0; double x1; })menuContentSize;
- (struct CGSize { double x0; double x1; })menuAreaSize;
- (void).cxx_destruct;

@end
