@class UIColor, NSMutableArray, UIFont;

@interface GCTextCellLayoutInfo : NSObject

@property (retain, nonatomic) NSMutableArray *contentTextStyles;
@property (nonatomic) struct CGSize { double width; double height; } contentTextSize;
@property (nonatomic) double sysTitleWidth;
@property (nonatomic) double originX;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentMarginInsets;
@property (nonatomic) double lineHeight;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL alignCenter;
@property (nonatomic) int numLine;

- (void).cxx_destruct;

@end
