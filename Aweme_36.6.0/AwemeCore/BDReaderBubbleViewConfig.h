@class UIColor;

@interface BDReaderBubbleViewConfig : NSObject

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margins;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } minYRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } maxYRect;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *containerColor;

- (void).cxx_destruct;

@end
